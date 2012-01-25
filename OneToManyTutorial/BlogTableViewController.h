//
//  Copyright (c) 2012 Parse. All rights reserved.

#import <UIKit/UIKit.h>

@interface BlogTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *postArray;

- (void)addPostButtonHandler:(id)sender;
- (void)refreshButtonHandler:(id)sender;

@end
