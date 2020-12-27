// Generated by ReScript, PLEASE EDIT WITH CARE

import * as $$Array from "../node_modules/bs-platform/lib/es6/array.js";
import * as Curry from "../node_modules/bs-platform/lib/es6/curry.js";
import * as React from "react";
import * as Router from "next/router";
import * as Button$Reason from "./Button.bs.js";
import HomeModuleCss from "../styles/Home.module.css";

var styles = HomeModuleCss;

var macrosoft = "MacroSoft";

var eggplant = "Eggplant";

var googol = "Googol";

var webCellz = [
  {
    name: macrosoft,
    url: "https://www.youtube.com/watch?v=eywi0h_Y5_U"
  },
  {
    name: eggplant,
    url: "/eggplant"
  },
  {
    name: googol,
    url: "./googol"
  }
];

function Home(Props) {
  var router = Router.useRouter();
  return React.createElement(React.Fragment, undefined, React.createElement("head", undefined, React.createElement("title", undefined, "WebCellz"), React.createElement("link", {
                      href: "/favicon.ico",
                      rel: "icon"
                    }), React.createElement("meta", {
                      content: "Why pay thousands of dollars for a cell phone when you can use a WebCell for free?",
                      name: "description"
                    })), React.createElement("div", {
                  className: styles.container
                }, React.createElement("div", {
                      className: styles.title
                    }, "webcellz"), React.createElement("div", {
                      className: styles.description
                    }, "Why pay thousands of dollars for a cell phone when you can use webcellz for free?"), React.createElement("div", {
                      className: styles.description
                    }, "webcellz are GUARANTEED to match your real cell phone usage"), React.createElement("div", {
                      className: styles.description
                    }, "Choose your webcellz below!"), React.createElement("div", {
                      className: styles.buttons
                    }, $$Array.map((function (webCell) {
                            var url = webCell.url;
                            var label = webCell.name;
                            var onClick = function (param) {
                              return Curry._1(router.push, url);
                            };
                            return React.createElement(Button$Reason.make, {
                                        label: label,
                                        onClick: onClick,
                                        key: label
                                      });
                          }), webCellz))));
}

var appName = "WebCellz";

var make = Home;

export {
  styles ,
  macrosoft ,
  eggplant ,
  googol ,
  appName ,
  webCellz ,
  make ,
  
}
/* styles Not a pure module */