
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 12 Jan 2022 11:23:11 GMT


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
ColorBackgroundNavbarPrimary,
ColorBackgroundPolicyinformationBox,
ColorBackgroundLinksbarPrimary,
ColorBackgroundPanelHeadingPrimary,
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
