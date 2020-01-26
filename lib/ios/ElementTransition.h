#import <Foundation/Foundation.h>
#import "ElementTransitionOptions.h"
#import "BaseAnimator.h"

@interface ElementTransition : BaseAnimator

- (instancetype)initWithTransitionOptions:(ElementTransitionOptions *)transitionOptions view:(UIView *)view fromVC:(UIViewController *)fromVC toVC:(UIViewController *)toVC containerView:(UIView *)containerView;

@end
