/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface _UICalloutBarSystemButtonDescription : NSObject {

	NSString* m_title;
	UIImage* m_image;
	SEL m_action;
	int m_type;
	/*^block*/id m_configurationBlock;

}

@property (nonatomic,readonly) SEL action; 
@property (nonatomic,copy) id configurationBlock; 
+(id)buttonDescriptionWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
+(id)buttonDescriptionWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(SEL)action;
-(id)initWithTitle:(id)arg1 orImage:(id)arg2 action:(SEL)arg3 type:(int)arg4 ;
-(id)configurationBlock;
-(id)materializeButtonInView:(id)arg1 ;
-(void)setConfigurationBlock:(id)arg1 ;
@end

