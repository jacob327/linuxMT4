#property copyright "Copyright 2019, MetaQuotes Software Corp."
#property link      "https://www.mql5.com"
#property version   "1.00"
#property strict
#property indicator_chart_window

#import "MT4DllTester.dll"
    string TestFunction(string);
#import

int OnInit() {
    EventSetTimer(5);
    return(INIT_SUCCEEDED);
}

void OnDeinit(const int reason) {
    EventKillTimer();
}

int OnCalculate(const int rates_total, const int prev_calculated, const datetime &time[], const double &open[], const double &high[], const double &low[], const double &close[], const long &tick_volume[], const long &volume[], const int &spread[]) {
    return(rates_total);
}

void OnTimer() {
    Alert(TestFunction("TestMessage "));
}
