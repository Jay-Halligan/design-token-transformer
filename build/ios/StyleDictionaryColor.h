
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Fri, 07 Jan 2022 15:36:44 GMT


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
ColorFontBodyParagraph,
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
ColorPanelBodyHeading,
GlobalBlack,
GlobalPrimary,
GlobalSecondary,
GlobalPrimaryLight,
GlobalPrimaryDark,
GlobalSecondaryDark,
GlobalSecondaryLight,
GlobalBackgroundButtonSecondaryEnabled,
GlobalBackgroundButtonSecondaryDisabled,
GlobalBackgroundButtonPrimaryEnabled,
GlobalBackgroundButtonPrimaryDisabled,
GlobalFontButtonPrimaryEnabled,
GlobalFontButtonPrimaryDisabled,
GlobalFontButtonSecondaryEnabled,
GlobalFontButtonSecondaryDisabled,
GlobalFontDropdownPlaceholderEnabled,
GlobalFontInputLabel,
GlobalFontInputPlaceholderActive,
GlobalFontBodyDefault,
GlobalBorderDropdownActive
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
