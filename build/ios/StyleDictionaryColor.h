
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Sat, 11 Dec 2021 19:13:13 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBlack,
ColorPrimary,
ColorSecondary,
ColorPrimaryLight,
ColorPrimaryDark,
ColorSecondaryDark,
ColorSecondaryLight,
ColorBackgroundButtonSecondaryEnabled,
ColorBackgroundButtonSecondaryDisabled,
ColorBackgroundButtonPrimaryEnabled,
ColorBackgroundButtonPrimaryDisabled,
ColorFontButtonPrimaryEnabled,
ColorFontButtonPrimaryDisabled,
ColorFontButtonSecondaryEnabled,
ColorFontButtonSecondaryDisabled,
ColorFontDropdownPlaceholderEnabled,
ColorFontInputLabel,
ColorFontInputPlaceholderActive,
ColorFontBodyDefault,
ColorFontHeadingH2,
ColorBorderDropdownActive
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
