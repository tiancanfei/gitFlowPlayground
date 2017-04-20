//
//  AppDelegate.h
//  gitFlowPlayground
//
//  Created by andehang on 2017/4/20.
//  Copyright © 2017年 andehang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

