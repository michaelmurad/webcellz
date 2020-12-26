type googolCss = {
  container: string,
  content: string
};

[@bs.module("../../styles/Googol.module.css")] 
external styles: googolCss = "default";

[@react.component]
let make = () => 
  <div className={styles.container}>
    <Smartphone>
      <div className={styles.content}>
        <div>
          {ReasonReact.string("ERROR")}
        </div>
        <div>
          {ReasonReact.string("Fatal error loading OS")}
        </div>
        <div>
          {ReasonReact.string("I mean... did you expect otherwise?")}
        </div>
      </div>
    </Smartphone>
  </div>