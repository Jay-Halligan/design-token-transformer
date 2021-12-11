
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Sat, 11 Dec 2021 19:12:12 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBlack,
ColorPrimary,
ColorSecondary,
ColorPrimaryLight,
ColorPrimaryDark,
ColorSecondaryDark,
ColorSecondaryLight,
ColorFontHeadingH3,
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
ColorBorderDropdownActive
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
