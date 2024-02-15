//
//  WDAppDelegate.h
//
//  Created by ahmedbkf on 14/02/2024.
//  Copyright . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	BOOL bBackground;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

