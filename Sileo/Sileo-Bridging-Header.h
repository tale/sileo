#import <bzlib.h>
#import <stdint.h>
#import <zlib.h>

#import "libzstd.h"
#import "lzma.h"
#import "lz4.h"
#import "UIColor+HTMLColors.h"
#import "WhiteBlur.h"
#import "ControlFileParserFast.h"
#import "DFContinuousForceTouchGestureRecognizer.h"

#if TARGET_OS_MACCATALYST
#import "LaunchAsRoot.h"
#endif

@interface UITabBar (Private)
@property (assign, setter=_setBlurEnabled:, nonatomic) BOOL _blurEnabled;
@end

@interface UITabBarItem (Private)
- (UIView *)view;
@end

@interface UINavigationBar (Private)
@property (assign, setter=_setBackgroundOpacity:, nonatomic) CGFloat _backgroundOpacity API_AVAILABLE(ios(11.0));
@end

@interface UIImage (Private)
+ (UIImage *)kitImageNamed:(NSString *)imageName;
@end

@interface UIPickerView (Private)
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor* textColor;
@end

@interface UITableView (Private)
-(BOOL)allowsFooterViewsToFloat;
@end
