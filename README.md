**How to use this template**

- Put your bindings in `src/ReactNativeViewPager` & rename accordingly or use
  `bsconfig.json` `"namespace"` field (more on this below),
- Update all occurences of

  - `@reason-react-native/viewpager`
  - `https://github.com/reason-react-native/viewpager`
  - `viewpager`
  - `@react-native-community/viewpager`
  - `https://github.com/react-native-community/react-native-viewpager`
  - `ReactNativeViewPager`. If you have more than a file exposed, you should
    consider using BuckleScript custom namespace by adjusting `bsconfig.json`
    and adding a `"namespace": "react-native-something"` (note that it will be
    converted to `ReactNativeViewPager`)

- Add your `@react-native-community/viewpager` (adjusted) in `peerDependencies`
  & `devDependencies` section
- Adjust the changelog (and/or clean it)
- Remove this part ⬆ & keep everything below ⬇

---

# `@reason-react-native/viewpager`

[![Build Status](https://github.com/reason-react-native/viewpager/workflows/Build/badge.svg)](https://github.com/reason-react-native/viewpager/actions)
[![Version](https://img.shields.io/npm/v/@reason-react-native/viewpager.svg)](https://www.npmjs.com/@reason-react-native/viewpager)
[![Chat](https://img.shields.io/discord/235176658175262720.svg?logo=discord&colorb=blue)](https://reasonml-community.github.io/reason-react-native/discord/)

[ReasonML](https://reasonml.github.io) /
[BuckleScript](https://bucklescript.github.io) bindings for
[`@react-native-community/viewpager`](https://github.com/react-native-community/react-native-viewpager).

Exposed as `ReactNativeViewPager` module.

`@reason-react-native/viewpager` X.y._ means it's compatible with
`@react-native-community/viewpager` X.y._

## Installation

When
[`@react-native-community/viewpager`](https://github.com/react-native-community/react-native-viewpager)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @reason-react-native/viewpager
# or
yarn add @reason-react-native/viewpager
```

`@reason-react-native/viewpager` should be added to `bs-dependencies` in your
`bsconfig.json`. Something like

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

### Types

#### `ReactNativeViewPager.t`

...

### Methods

#### `ReactNativeViewPager.method`

...

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
