include ViewPagerElement;

type scrollEvent;
type selectedEvent;
type scrollStateChangedEvent;

[@bs.obj]
external scrollEvent: (~position: float, ~offset: float, unit) => scrollEvent =
  "";
[@bs.obj]
external selectedEvent: (~position: float, unit) => selectedEvent = "";
[@bs.obj]
external scrollStateChangedEvent:
  (~pageScrollState: [@bs.string] [ | `idle | `dragging | `settling], unit) =>
  scrollStateChangedEvent =
  "";

[@bs.module "@react-native-community/viewpager"] [@react.component]
external make:
  (
    ~ref: ref=?,
    ~initialPage: int=?,
    ~scrollEnabled: bool=?,
    ~onPageScroll: ReactNative.Event.syntheticEvent(scrollEvent) => unit=?,
    ~onPageSelected: ReactNative.Event.syntheticEvent(selectedEvent) => unit=?,
    ~onPageScrollStateChanged: ReactNative.Event.syntheticEvent(
                                 scrollStateChangedEvent,
                               ) =>
                               unit
                                 =?,
    ~keyboardDismissMode: [@bs.string] [ | `none | [@bs.as "on-drag"] `onDrag]
                            =?,
    ~pageMargin: int=?,
    ~onMoveShouldSetResponderCapture: ReactNative.Event.pressEvent => bool=?,
    ~style: ReactNative.Style.t=?,
    ~children: React.element=?,
    ~orientation: [@bs.string] [ | `horizontal | `vertical]=?,
    ~transitionStyle: [@bs.string] [ | `scroll | `curl]=?,
    ~showPageIndicator: bool=?
  ) =>
  React.element =
  "default";
