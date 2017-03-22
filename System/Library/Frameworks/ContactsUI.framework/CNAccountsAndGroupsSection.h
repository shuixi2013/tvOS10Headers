/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface CNAccountsAndGroupsSection : NSObject {

	NSArray* _items;
	/*^block*/id _titleProvider;
	NSString* _title;

}

@property (nonatomic,copy) id titleProvider;                //@synthesize titleProvider=_titleProvider - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * items;               //@synthesize items=_items - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)titleProvider;
-(void)setTitleProvider:(id)arg1 ;
@end

