using ReactNative.Bridge;
using System;
using System.Collections.Generic;
using Windows.ApplicationModel.Core;
using Windows.UI.Core;

namespace Elegant.Service.To.Relax.RNElegantServiceToRelax
{
    /// <summary>
    /// A module that allows JS to share data.
    /// </summary>
    class RNElegantServiceToRelaxModule : NativeModuleBase
    {
        /// <summary>
        /// Instantiates the <see cref="RNElegantServiceToRelaxModule"/>.
        /// </summary>
        internal RNElegantServiceToRelaxModule()
        {

        }

        /// <summary>
        /// The name of the native module.
        /// </summary>
        public override string Name
        {
            get
            {
                return "RNElegantServiceToRelax";
            }
        }
    }
}
