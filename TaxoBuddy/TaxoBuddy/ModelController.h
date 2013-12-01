//
//  ModelController.h
//  TaxoBuddy
//
//  Created by Rohan Chandrasekhar on 30/11/13.
//  Copyright (c) 2013 Rohan Chandrasekhar. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
