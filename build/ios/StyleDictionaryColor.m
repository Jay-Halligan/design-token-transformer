
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Sat, 11 Dec 2021 19:05:32 GMT


#import "StyleDictionaryColor.h"

@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
[UIColor colorWithRed:0.004f green:0.004f blue:0.004f alpha:1.000f],
[UIColor colorWithRed:0.910f green:0.302f blue:0.106f alpha:1.000f],
[UIColor colorWithRed:0.306f green:0.333f blue:0.635f alpha:1.000f],
[UIColor colorWithRed:1.000f green:0.498f blue:0.286f alpha:1.000f],
[UIColor colorWithRed:0.682f green:0.063f blue:0.000f alpha:1.000f],
[UIColor colorWithRed:0.098f green:0.176f blue:0.451f alpha:1.000f],
[UIColor colorWithRed:0.498f green:0.506f blue:0.831f alpha:1.000f],
[UIColor colorWithRed:0.098f green:0.176f blue:0.451f alpha:1.000f],
[UIColor colorWithRed:0.306f green:0.333f blue:0.635f alpha:1.000f],
[UIColor colorWithRed:0.741f green:0.741f blue:0.741f alpha:1.000f],
[UIColor colorWithRed:0.910f green:0.302f blue:0.106f alpha:1.000f],
[UIColor colorWithRed:0.741f green:0.741f blue:0.741f alpha:1.000f],
[UIColor colorWithRed:1.000f green:1.000f blue:1.000f alpha:1.000f],
[UIColor colorWithRed:0.290f green:0.290f blue:0.286f alpha:1.000f],
[UIColor colorWithRed:1.000f green:1.000f blue:1.000f alpha:1.000f],
[UIColor colorWithRed:0.290f green:0.290f blue:0.286f alpha:1.000f],
[UIColor colorWithRed:0.741f green:0.741f blue:0.741f alpha:1.000f],
[UIColor colorWithRed:0.000f green:0.000f blue:0.000f alpha:1.000f],
[UIColor colorWithRed:0.741f green:0.741f blue:0.741f alpha:1.000f],
[UIColor colorWithRed:0.373f green:0.388f blue:0.408f alpha:1.000f],
[UIColor colorWithRed:0.741f green:0.741f blue:0.741f alpha:1.000f]
    ];
  });

  return colorArray;
}

@end
