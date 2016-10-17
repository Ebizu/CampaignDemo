//
//  HomeCollectionViewController.h
//  CampaignDemo
//
//  Created by Mohamad Rezkya Feurstinnov Hairy on 4/12/16.
//  Copyright © 2016 ebizu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HomeCell.h"

@interface HomeCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (strong, nonatomic) NSMutableArray *homeCellTexts;
@end
