# `@reason-react-native/viewpager`

[![Build Status](https://github.com/reason-react-native/viewpager/workflows/Build/badge.svg)](https://github.com/reason-react-native/viewpager/actions)
[![Version](https://img.shields.io/npm/v/@reason-react-native/viewpager.svg)](https://www.npmjs.com/@reason-react-native/viewpager)
[![Chat](https://img.shields.io/discord/235176658175262720.svg?logo=discord&colorb=blue)](https://reasonml-community.github.io/reason-react-native/discord/)

[ReScript](https://rescript-lang.org) / [Reason](https://reasonml.github.io) bindings for
[`@react-native-community/viewpager`](https://github.com/callstack/react-native-viewpager).

Exposed as `ReactNativeViewPager` module.

`@reason-react-native/viewpager` X.y.\* means it's compatible with
`@react-native-community/viewpager` X.y.\*

## Installation

When
[`@react-native-community/viewpager`](https://github.com/callstack/react-native-viewpager)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @reason-react-native/viewpager
# or
yarn add @reason-react-native/viewpager
```

`@reason-react-native/viewpager` should be added to `bs-dependencies` in your
`bsconfig.json`:

```diff
{
  //...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    // ...
+    "@reason-react-native/viewpager"
  ],
  //...
}
```

## Usage

```reason
[@react.component]
let app = () =>
    <SafeAreaView style={styles##body}>
      <ReactNativeViewPager style={styles##body}
        initialPage=1
        pageMargin=13
        transitionStyle={`curl}
        showPageIndicator=true
        >
        <View style={styles##red}/>
        <View style={styles##blue}/>
        <View style={styles##green}/>
      </ReactNativeViewPager>
    </SafeAreaView>;
```

#### `ReactNativeViewPager` props

```reason
~ref: ref=?,
~initialPage: int=?,
~scrollEnabled: bool=?,
~onPageScroll: PageScrollEvent.t => unit=?,
~onPageSelected: PageSelectedEvent.t => unit=?,
~onPageScrollStateChanged: PageScrollStateChangedEvent.t => unit=?,
~keyboardDismissMode: [@bs.string] [ | `none | [@bs.as "on-drag"] `onDrag]=?,
~pageMargin: int=?,
~onMoveShouldSetResponderCapture: ReactNative.Event.pressEvent => bool=?,
~style: ReactNative.Style.t=?,
~children: React.element=?,
~orientation: [@bs.string] [ | `horizontal | `vertical]=?,
~transitionStyle: [@bs.string] [ | `scroll | `curl]=?,
~showPageIndicator: bool=?
```

### Methods

#### `ReactNativeViewPager.setPage`

```reason
setPage: (T.t, int) => unit = "setPage";
```

#### `ReactNativeViewPager.setPage`

```reason
setPageWithoutAnimation: (T.t, int) => unit =
    "setPageWithoutAnimation";
```

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more informations about recent
releases.

---

## Contribute

Read the
[contribution guidelines](https://github.com/reason-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/reason-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
