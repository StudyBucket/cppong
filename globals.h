#ifndef GLOBALS_H
#define GLOBALS_H
using namespace std;

#include <vector>
#include <string>
#include <QTimer>

#include "gform.h"

class globals{
    public:
        globals();
        static globals* instance();
        QTimer*         gTimer;

        bool            get_gDebug();
        bool            get_gRunning();
        vector<GForm>   get_gForms();
        QTimer*         get_gTimer();
        float           get_gDisplayFactor();
        bool            get_gColorSwitch();
        int             get_gApproximation();

        void            set_gDebug(bool val);
        void            set_gRunning(bool val);
        void            set_gTimer(QTimer *timer);
        void            set_gForms(vector<GForm> forms);
        void            set_gApproximation(int val);

        void            increase_gDisplayFactor();
        void            decrease_gDisplayFactor();

        void            start_gTimer(int val);
        void            stop_gTimer();

        void            addForm_gForms(GForm form);
        void            populate_gForms();

        void            push_gMessage(string strg);
        vector<string>  get_gMessages();
        string          pop_gMessage();

        int             gColorSwitcherId;
        void            switchColor();

    private:
        bool            gDebug;
        bool            gRunning;
        bool            gColorSwitch;
        bool            gShowCollisonBoxes;
        float           gDisplayFactor;
        string          gSaved;
        vector<GForm>   gForms;
        int             gFormCount;
        int             gApproximation;
        vector<int>     gField;
        vector<string>  gMessages;
        int             assignId();
};

#endif // GLOBALS_H