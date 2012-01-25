//
//  Copyright (c) 2012 Parse. All rights reserved.

#import <UIKit/UIKit.h>

@interface NewPostViewController : UIViewController

@property (nonatomic, strong) UITextView *textView;

- (void)addButtonTouchHandler:(id)sender;
- (void)cancelButtonTouchHandler:(id)sender;

@end
