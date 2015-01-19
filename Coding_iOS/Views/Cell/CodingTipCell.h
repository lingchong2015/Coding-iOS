//
//  CodingTipCell.h
//  Coding_iOS
//
//  Created by 王 原闯 on 14-9-2.
//  Copyright (c) 2014年 Coding. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CodingTip.h"

@interface CodingTipCell : UITableViewCell<TTTAttributedLabelDelegate>
@property (strong, nonatomic) UITTTAttributedLabel *contentLabel;
@property (strong, nonatomic) CodingTip *curTip;
@property (assign, nonatomic) BOOL hasBeenRead;
@property (copy, nonatomic) void(^linkClickedBlock)(HtmlMediaItem *item, CodingTip *tip);
+ (CGFloat)cellHeightWithObj:(id)obj hasBeenRead:(BOOL)hasBeenRead;

@end
