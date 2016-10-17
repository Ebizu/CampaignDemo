//
//  ViewController.h
//  CampaignDemo
//
//  Created by Mohamad Rezkya Feurstinnov Hairy on 4/11/16.
//  Copyright © 2016 ebizu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *tfEmail;
@property (weak, nonatomic) IBOutlet UITextField *tfPassword;
@property (weak, nonatomic) IBOutlet UIButton *btnLogin;
- (IBAction)onLoginClicked:(id)sender;


@end

