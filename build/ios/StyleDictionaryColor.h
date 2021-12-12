
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Sun, 12 Dec 2021 20:55:21 GMT


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
ColorBackgroundButtonSecondaryEnabled,
ColorBackgroundButtonSecondaryDisabled,
ColorBackgroundButtonPrimaryEnabled,
ColorBackgroundButtonPrimaryDisabled,
ColorBackgroundTopBannerPrimary,
ColorBackgroundTopNavbarPrimary,
ColorBackgroundNavbarSelecteditem,
ColorBackgroundNavbarButton,
ColorFontButtonPrimaryEnabled,
ColorFontButtonPrimaryDisabled,
ColorFontButtonSecondaryEnabled,
ColorFontButtonSecondaryDisabled,
ColorFontDropdownPlaceholderEnabled,
ColorFontInputLabel,
ColorFontInputPlaceholderActive,
ColorFontBodyDefault,
ColorFontHeadingH2,
ColorFontNavbarText,
ColorBorderDropdownActive,
ColorForegroundNavbarSelecteditem,
ColorForegroundNavbarButton
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
