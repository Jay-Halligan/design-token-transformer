
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 05 Jan 2022 12:00:50 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBlack,
ColorPrimary,
ColorSecondary,
ColorPrimaryLight,
ColorPrimaryDark,
ColorSecondaryDark,
ColorSecondaryLight,
ColorWhite,
ColorBackgroundPageFooter,
ColorBackgroundButtonSecondaryEnabled,
ColorBackgroundButtonSecondaryDisabled,
ColorBackgroundButtonPrimaryEnabled,
ColorBackgroundButtonPrimaryDisabled,
ColorBackgroundTopBannerPrimary,
ColorBackgroundTopNavbarPrimary,
ColorBackgroundNavbarSelecteditem,
ColorBackgroundNavbarButton,
ColorBackgroundPolicyinformationBox,
ColorFontButtonPrimaryEnabled,
ColorFontButtonPrimaryDisabled,
ColorFontButtonSecondaryEnabled,
ColorFontButtonSecondaryDisabled,
ColorFontDropdownPlaceholderEnabled,
ColorFontInputLabel,
ColorFontInputPlaceholderActive,
ColorFontBodyDefault,
ColorFontHeadingH2,
ColorFontHeadingDefault,
ColorFontNavbarText,
ColorFontNavbarSelecteditem,
ColorFontNavbarButton,
ColorFontPanelBody,
ColorFontGlobalLink,
ColorFontPageFooter,
ColorFontPolicyinformationBox,
ColorBorderDropdownActive,
ColorPanelDivider,
ColorPanelBodyHeading
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
