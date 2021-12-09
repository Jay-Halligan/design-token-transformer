
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Thu, 09 Dec 2021 15:11:49 GMT


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
