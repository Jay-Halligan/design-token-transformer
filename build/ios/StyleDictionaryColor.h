
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Fri, 10 Dec 2021 23:12:14 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBlue,
ColorDanger,
ColorDangerRgb,
ColorBlueMid,
ColorPaleblue,
ColorGreen,
ColorBlack,
ColorPurple,
ColorYellow,
ColorBackgroundButtonSecondaryEnabled,
ColorBackgroundButtonSecondaryDisabled,
ColorBackgroundButtonPrimaryEnabled,
ColorBackgroundButtonPrimaryDisabled,
ColorForegroundButtonPrimaryEnabled,
ColorForegroundButtonPrimaryDisabled,
ColorForegroundButtonSecondaryEnabled,
ColorForegroundButtonSecondaryDisabled,
ColorForegroundDropdownPlaceholderEnabled,
ColorForegroundInputLabel,
ColorForegroundInputPlaceholderActive,
ColorBorderDropdownActive
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
