// Generated by ReScript, PLEASE EDIT WITH CARE

import * as React from "react";
import * as Smartphone$Reason from "../../components/Smartphone.bs.js";
import GoogolModuleCss from "../../styles/Googol.module.css";

var styles = GoogolModuleCss;

function Googol(Props) {
  return React.createElement("div", {
              className: styles.container
            }, React.createElement(Smartphone$Reason.make, {
                  children: React.createElement("div", {
                        className: styles.content
                      }, React.createElement("div", undefined, "ERROR"), React.createElement("div", undefined, "Fatal error loading OS"), React.createElement("div", undefined, "I mean... did you expect otherwise?"))
                }));
}

var make = Googol;

export {
  styles ,
  make ,
  
}
/* styles Not a pure module */