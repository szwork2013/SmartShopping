//
//  ZaraViewController.h
//  ExhibitionDemo
//
//  Created by Omar Hallab on 5/11/15.
//  Copyright (c) 2015 Primetech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import "ZaraCellView.h"



@interface ZaraViewController : UIViewController <UITableViewDelegate> {
    
    
    IBOutlet UIScrollView *scroller;
    NSArray *availableItems;
    

    
}
@property (strong, nonatomic) IBOutlet UIView *detailView;

@property (strong, nonatomic) IBOutlet UIImageView *LargeImage;

@property (strong, nonatomic) IBOutlet UILabel *itemDetail;



- (IBAction)backAction:(id)sender;



@property (strong, nonatomic) IBOutlet UITableView *ZaraTable;




@end
