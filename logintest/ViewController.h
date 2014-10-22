//
//  ViewController.h
//  logintest
//
//  Created by Jong Yun Lee on 10/22/14.
//  Copyright (c) 2014 HeapStack. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface ViewController : UIViewController <FBLoginViewDelegate>

@property (strong, nonatomic) IBOutlet UILabel *nameLabel;
@property (strong, nonatomic) IBOutlet UILabel *statusLabel;
@property (strong, nonatomic) IBOutlet FBProfilePictureView *profilePictureView;

@property (strong, nonatomic) IBOutlet FBLoginView *loginView;
@end

