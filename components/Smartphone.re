type smartphoneCss = {
  smartphone: string,
  content: string
};

[@bs.module("../styles/components/Smartphone.module.css")] 
external styles: smartphoneCss = "default";

[@react.component]
let make = (~children) => 
  <div className={styles.smartphone}>
    <div className={styles.content}>
      {children}
    </div>
  </div>