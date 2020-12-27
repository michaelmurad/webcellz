// Generated by ReScript, PLEASE EDIT WITH CARE

import * as React from "react";
import * as Button$Reason from "./Button.bs.js";
import AppScreenModuleCss from "../styles/components/AppScreen.module.css";

var styles = AppScreenModuleCss;

function AppScreen(Props) {
  var onClick = Props.onClick;
  var app = Props.app;
  switch (app) {
    case /* Messages */0 :
        return React.createElement("div", {
                    className: styles.container + (" " + styles.messages)
                  }, React.createElement(Button$Reason.make, {
                        label: "Back",
                        onClick: onClick
                      }), "No new messages");
    case /* Crapchat */1 :
        return React.createElement("div", {
                    className: styles.container + (" " + styles.messages)
                  }, React.createElement(Button$Reason.make, {
                        label: "Back",
                        onClick: onClick
                      }), React.createElement("h1", undefined, "You have been banned for the following reasons:"), React.createElement("div", undefined, "Reeking of a not so quiet desperation"));
    case /* Bank */2 :
        return React.createElement("div", {
                    className: styles.container + (" " + styles.messages)
                  }, React.createElement(Button$Reason.make, {
                        label: "Back",
                        onClick: onClick
                      }), "Balance: -$21.32");
    case /* Home */3 :
        throw {
              RE_EXN_ID: "Match_failure",
              _1: [
                "AppScreen.re",
                11,
                2
              ],
              Error: new Error()
            };
    
  }
}

var make = AppScreen;

export {
  styles ,
  make ,
  
}
/* styles Not a pure module */
