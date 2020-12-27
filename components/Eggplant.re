type eggplantCss = {
  container: string,
  content: string
};

[@bs.module("../styles/Eggplant.module.css")] 
external styles: eggplantCss = "default";

[@react.component]
let make = () => 
  <div className={styles.container}>
    <Smartphone>
      <EggplantScreen />
    </Smartphone>
  </div>