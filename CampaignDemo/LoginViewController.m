//
//  ViewController.m
//  CampaignDemo
//
//  Created by Mohamad Rezkya Feurstinnov Hairy on 4/11/16.
//  Copyright © 2016 ebizu. All rights reserved.
//

#import "LoginViewController.h"
#import "HomeCollectionViewController.h"

@interface LoginViewController ()

@end

@implementation LoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)onLoginClicked:(id)sender {
    [self performSegueWithIdentifier:@"login_segue" sender:self];
}
@end
