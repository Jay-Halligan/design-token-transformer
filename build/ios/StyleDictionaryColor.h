
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Thu, 09 Dec 2021 15:00:14 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorColorBlue,
ColorColorDanger,
ColorColorDangerRgb,
ColorColorBlueMid,
ColorColorPaleblue,
ColorColorGreen,
ColorColorBlack,
ColorColorPurple,
ColorColorYellow,
ColorColorBackgroundButtonSecondaryEnabled,
ColorColorBackgroundButtonSecondaryDisabled,
ColorColorBackgroundButtonPrimaryEnabled,
ColorColorBackgroundButtonPrimaryDisabled,
ColorColorForegroundButtonPrimaryEnabled,
ColorColorForegroundButtonPrimaryDisabled,
ColorColorForegroundButtonSecondaryEnabled,
ColorColorForegroundButtonSecondaryDisabled,
ColorColorForegroundDropdownPlaceholderEnabled,
ColorColorForegroundInputLabel,
ColorColorForegroundInputPlaceholderActive,
ColorColorBorderDropdownActive
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
