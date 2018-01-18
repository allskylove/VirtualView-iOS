//
//  VVImageView.h
//  VirtualView
//
//  Copyright (c) 2017-2018 Alibaba. All rights reserved.
//

#import "VVViewObject.h"

@interface VVImageView : VVViewObject
@property(nonatomic, strong)NSString* imgUrl;
@property(strong, nonatomic)UIImage* defaultImg;
@property(nonatomic, assign)CGSize   imageSize;
@end

@interface VVLayerDelegate : NSObject<CALayerDelegate>
@property(nonatomic, weak)VVImageView* delegateSource;
@end
