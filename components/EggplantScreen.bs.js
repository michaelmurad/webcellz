// Generated by ReScript, PLEASE EDIT WITH CARE

import * as Curry from "../node_modules/bs-platform/lib/es6/curry.js";
import * as React from "react";
import * as EP$Reason from "../modules/EP.bs.js";
import * as Belt_Array from "../node_modules/bs-platform/lib/es6/belt_Array.js";
import * as AppIcon$Reason from "./AppIcon.bs.js";
import * as AppScreen$Reason from "./AppScreen.bs.js";
import EggplantScreenModuleCss from "../styles/components/EggplantScreen.module.css";

var styles = EggplantScreenModuleCss;

function EggplantScreen(Props) {
  var match = React.useState(function () {
        return /* Home */3;
      });
  var setApp = match[1];
  var app = match[0];
  var onClick = function (param) {
    return Curry._1(setApp, (function (param) {
                  return /* Home */3;
                }));
  };
  if (app >= 3) {
    return React.createElement("div", {
                className: styles.container
              }, Belt_Array.map(EP$Reason.apps, (function (application) {
                      return React.createElement(AppIcon$Reason.make, {
                                  label: EP$Reason.appToString(application),
                                  onClick: (function (param) {
                                      return Curry._1(setApp, (function (param) {
                                                    return application;
                                                  }));
                                    }),
                                  key: EP$Reason.appToString(application)
                                });
                    })));
  } else {
    return React.createElement(AppScreen$Reason.make, {
                onClick: onClick,
                app: app
              });
  }
}

var make = EggplantScreen;

export {
  styles ,
  make ,
  
}
/* styles Not a pure module */
