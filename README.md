
# react-native-elegant-service-to-relax

## Getting started

`$ npm install react-native-elegant-service-to-relax --save`

### Mostly automatic installation

`$ react-native link react-native-elegant-service-to-relax`

### Manual installation


#### iOS

1. In XCode, in the project navigator, right click `Libraries` ➜ `Add Files to [your project's name]`
2. Go to `node_modules` ➜ `react-native-elegant-service-to-relax` and add `RNElegantServiceToRelax.xcodeproj`
3. In XCode, in the project navigator, select your project. Add `libRNElegantServiceToRelax.a` to your project's `Build Phases` ➜ `Link Binary With Libraries`
4. Run your project (`Cmd+R`)<

#### Android

1. Open up `android/app/src/main/java/[...]/MainActivity.java`
  - Add `import com.reactlibrary.RNElegantServiceToRelaxPackage;` to the imports at the top of the file
  - Add `new RNElegantServiceToRelaxPackage()` to the list returned by the `getPackages()` method
2. Append the following lines to `android/settings.gradle`:
  	```
  	include ':react-native-elegant-service-to-relax'
  	project(':react-native-elegant-service-to-relax').projectDir = new File(rootProject.projectDir, 	'../node_modules/react-native-elegant-service-to-relax/android')
  	```
3. Insert the following lines inside the dependencies block in `android/app/build.gradle`:
  	```
      compile project(':react-native-elegant-service-to-relax')
  	```

#### Windows
[Read it! :D](https://github.com/ReactWindows/react-native)

1. In Visual Studio add the `RNElegantServiceToRelax.sln` in `node_modules/react-native-elegant-service-to-relax/windows/RNElegantServiceToRelax.sln` folder to their solution, reference from their app.
2. Open up your `MainPage.cs` app
  - Add `using Elegant.Service.To.Relax.RNElegantServiceToRelax;` to the usings at the top of the file
  - Add `new RNElegantServiceToRelaxPackage()` to the `List<IReactPackage>` returned by the `Packages` method


## Usage
```javascript
import RNElegantServiceToRelax from 'react-native-elegant-service-to-relax';

// TODO: What to do with the module?
RNElegantServiceToRelax;
```
  