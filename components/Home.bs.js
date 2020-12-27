// Generated by ReScript, PLEASE EDIT WITH CARE

import * as $$Array from "../node_modules/bs-platform/lib/es6/array.js";
import * as Curry from "../node_modules/bs-platform/lib/es6/curry.js";
import * as React from "react";
import * as Router from "next/router";
import * as Button$Reason from "./Button.bs.js";
import HomeModuleCss from "../styles/Home.module.css";

var styles = HomeModuleCss;

var webCellz = [
  {
    name: "MacroSoft",
    url: "https://www.youtube.com/watch?v=eywi0h_Y5_U"
  },
  {
    name: "Eggplant",
    url: "/eggplant"
  },
  {
    name: "Googol",
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
                    }, "WebCellz"), React.createElement("div", {
                      className: styles.description
                    }, "Why pay thousands of dollars for a cell phone when you can use WebCellz for free?"), React.createElement("div", {
                      className: styles.description
                    }, "WebCellz are GUARANTEED to replicate the functionality of a smart phone*"), React.createElement("div", {
                      className: styles.description
                    }, "Choose your webcell below!"), React.createElement("div", {
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

var make = Home;

export {
  styles ,
  webCellz ,
  make ,
  
}
/* styles Not a pure module */
