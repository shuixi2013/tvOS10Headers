/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary, NSString, NSDate, LSApplicationProxy, LSAppLink, SFAirDropTransferStateMachine, NSArray, UIImage, NSNumber, NSError, NSURL;

@interface SFAirDropTransferData : NSObject <NSSecureCoding> {

	NSDictionary* _contentTypes;
	NSMutableDictionary* _fileExtensionsToTypes;
	BOOL _saveToCloudDrive;
	BOOL _transferCompleted;
	BOOL _soundPlayed;
	BOOL _nonFileItem;
	BOOL _unknownScheme;
	BOOL _unknownFileType;
	BOOL _undesiredMixOfItems;
	BOOL _onlyPhotosOrVideos;
	BOOL _autoAccept;
	BOOL _senderIsMe;
	BOOL _verifiableIdentity;
	NSString* _recordID;
	NSDate* _timeLastUserInteraction;
	LSApplicationProxy* _selectedApplicationDestination;
	LSAppLink* _appLink;
	long long _transferStateResetCount;
	SFAirDropTransferStateMachine* _transferStateMachine;
	long long _alertType;
	NSString* _alertTitle;
	NSString* _alertMessage;
	NSArray* _possibleApplicationDestinations;
	UIImage* _fileIcon;
	NSString* _bundleID;
	NSNumber* _filesCopied;
	NSArray* _files;
	NSArray* _items;
	NSDictionary* _itemsDescriptionAdvanced;
	NSString* _itemsDescription;
	NSNumber* _bytesCopied;
	NSNumber* _totalBytes;
	NSNumber* _timeRemaining;
	NSError* _error;
	NSString* _senderComputerName;
	NSString* _senderEmail;
	NSString* _senderEmailHash;
	NSString* _senderCompositeName;
	NSString* _senderFirstName;
	NSString* _senderLastName;
	NSString* _senderID;
	NSString* _contentType;

}

@property (nonatomic,retain) NSDate * timeLastUserInteraction;                                     //@synthesize timeLastUserInteraction=_timeLastUserInteraction - In the implementation block
@property (assign,getter=shouldAutoAccept,nonatomic) BOOL autoAccept;                              //@synthesize autoAccept=_autoAccept - In the implementation block
@property (nonatomic,retain) UIImage * fileIcon;                                                   //@synthesize fileIcon=_fileIcon - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * filesCopied;                                               //@synthesize filesCopied=_filesCopied - In the implementation block
@property (nonatomic,retain) NSArray * files;                                                      //@synthesize files=_files - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSDictionary * itemsDescriptionAdvanced;                              //@synthesize itemsDescriptionAdvanced=_itemsDescriptionAdvanced - In the implementation block
@property (nonatomic,copy) NSString * itemsDescription;                                            //@synthesize itemsDescription=_itemsDescription - In the implementation block
@property (nonatomic,retain) NSNumber * bytesCopied;                                               //@synthesize bytesCopied=_bytesCopied - In the implementation block
@property (nonatomic,retain) NSNumber * totalBytes;                                                //@synthesize totalBytes=_totalBytes - In the implementation block
@property (nonatomic,retain) NSNumber * timeRemaining;                                             //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (nonatomic,retain) NSError * error;                                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * senderComputerName;                                          //@synthesize senderComputerName=_senderComputerName - In the implementation block
@property (nonatomic,copy) NSString * senderEmail;                                                 //@synthesize senderEmail=_senderEmail - In the implementation block
@property (nonatomic,copy) NSString * senderEmailHash;                                             //@synthesize senderEmailHash=_senderEmailHash - In the implementation block
@property (nonatomic,copy) NSString * senderCompositeName;                                         //@synthesize senderCompositeName=_senderCompositeName - In the implementation block
@property (nonatomic,copy) NSString * senderFirstName;                                             //@synthesize senderFirstName=_senderFirstName - In the implementation block
@property (nonatomic,copy) NSString * senderLastName;                                              //@synthesize senderLastName=_senderLastName - In the implementation block
@property (assign,nonatomic) BOOL senderIsMe;                                                      //@synthesize senderIsMe=_senderIsMe - In the implementation block
@property (nonatomic,copy) NSString * senderID;                                                    //@synthesize senderID=_senderID - In the implementation block
@property (assign,getter=isVerifiableIdentity,nonatomic) BOOL verifiableIdentity;                  //@synthesize verifiableIdentity=_verifiableIdentity - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                                 //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordID;                                           //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * selectedApplicationDestination;                  //@synthesize selectedApplicationDestination=_selectedApplicationDestination - In the implementation block
@property (nonatomic,readonly) LSAppLink * appLink;                                                //@synthesize appLink=_appLink - In the implementation block
@property (nonatomic,readonly) long long transferStateResetCount;                                  //@synthesize transferStateResetCount=_transferStateResetCount - In the implementation block
@property (nonatomic,readonly) SFAirDropTransferStateMachine * transferStateMachine;               //@synthesize transferStateMachine=_transferStateMachine - In the implementation block
@property (assign,nonatomic) BOOL saveToCloudDrive;                                                //@synthesize saveToCloudDrive=_saveToCloudDrive - In the implementation block
@property (assign,nonatomic) BOOL transferCompleted;                                               //@synthesize transferCompleted=_transferCompleted - In the implementation block
@property (assign,nonatomic) BOOL soundPlayed;                                                     //@synthesize soundPlayed=_soundPlayed - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy,readonly) NSString * senderName; 
@property (nonatomic,readonly) NSDictionary * contentTypes; 
@property (nonatomic,copy,readonly) NSString * firstFileName; 
@property (nonatomic,copy,readonly) NSString * firstFileExtension; 
@property (nonatomic,copy,readonly) NSString * firstFileTypeDescription; 
@property (nonatomic,readonly) NSURL * firstURL; 
@property (nonatomic,copy,readonly) NSArray * fileNames; 
@property (assign,nonatomic) long long alertType;                                                  //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy) NSString * alertTitle;                                                  //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,copy) NSString * alertMessage;                                                //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectAppMessage; 
@property (nonatomic,copy,readonly) NSString * searchAppStoreMessage; 
@property (nonatomic,copy,readonly) NSString * rejectedMessage; 
@property (getter=isNonFileItem,nonatomic,readonly) BOOL nonFileItem;                              //@synthesize nonFileItem=_nonFileItem - In the implementation block
@property (getter=isUnknownScheme,nonatomic,readonly) BOOL unknownScheme;                          //@synthesize unknownScheme=_unknownScheme - In the implementation block
@property (getter=isUnknownFileType,nonatomic,readonly) BOOL unknownFileType;                      //@synthesize unknownFileType=_unknownFileType - In the implementation block
@property (getter=isUndesiredMixOfItems,nonatomic,readonly) BOOL undesiredMixOfItems;              //@synthesize undesiredMixOfItems=_undesiredMixOfItems - In the implementation block
@property (getter=isOnlyPhotosOrVideos,nonatomic,readonly) BOOL onlyPhotosOrVideos;                //@synthesize onlyPhotosOrVideos=_onlyPhotosOrVideos - In the implementation block
@property (nonatomic,retain) NSArray * possibleApplicationDestinations;                            //@synthesize possibleApplicationDestinations=_possibleApplicationDestinations - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)archivedTransfersBaseURL;
+(id)validateTransferFolder:(id)arg1 withRecordID:(id)arg2 ;
+(void)cleanupTransferWithRecordID:(id)arg1 ;
+(id)archivedTransferName;
+(id)transferURLForRecordID:(id)arg1 ;
+(id)archivedTransfers;
+(id)airDropTransferDataWithRecordID:(id)arg1 ;
+(id)loadFromURL:(id)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(BOOL)isValid;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)removeItem:(id)arg1 ;
-(NSString *)alertTitle;
-(void)setAlertTitle:(NSString *)arg1 ;
-(long long)alertType;
-(void)setAlertType:(long long)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSNumber *)timeRemaining;
-(void)setTimeRemaining:(NSNumber *)arg1 ;
-(LSAppLink *)appLink;
-(NSDictionary *)contentTypes;
-(NSString *)contentType;
-(void)setAlertMessage:(NSString *)arg1 ;
-(NSString *)alertMessage;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setSenderID:(NSString *)arg1 ;
-(NSString *)senderID;
-(NSNumber *)totalBytes;
-(void)setTotalBytes:(NSNumber *)arg1 ;
-(NSString *)recordID;
-(NSString *)senderName;
-(void)archive;
-(BOOL)transferCompleted;
-(void)archiveToURL:(id)arg1 ;
-(NSString *)senderCompositeName;
-(NSString *)firstFileName;
-(BOOL)isVerifiableIdentity;
-(NSString *)rejectedMessage;
-(NSString *)searchAppStoreMessage;
-(NSString *)selectAppMessage;
-(id)progressMessageAndAlertTitle:(id*)arg1 ;
-(id)messageAndAlertTitle:(id*)arg1 buttonTitle:(id*)arg2 ;
-(void)initializeAlertStrings;
-(id)messageInProgress:(BOOL)arg1 completed:(BOOL)arg2 alertTitle:(id*)arg3 buttonTitle:(id*)arg4 ;
-(NSString *)firstFileExtension;
-(NSString *)itemsDescription;
-(id)messageLocalizedKeyWithTypes:(id)arg1 isTrustedPerson:(BOOL)arg2 isInProgress:(BOOL)arg3 isCompleted:(BOOL)arg4 ;
-(NSURL *)firstURL;
-(NSDictionary *)itemsDescriptionAdvanced;
-(id)initWithRecordID:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(void)resetTransferState;
-(void)applyTransferState:(id)arg1 ;
-(BOOL)userHasAcknowledgedTransfer;
-(NSString *)firstFileTypeDescription;
-(NSArray *)fileNames;
-(void)setItemsDescription:(NSString *)arg1 ;
-(id)typeForFileExtension:(id)arg1 ;
-(id)transferCompleteMessageAndAlertTitle:(id*)arg1 ;
-(NSDate *)timeLastUserInteraction;
-(void)setTimeLastUserInteraction:(NSDate *)arg1 ;
-(LSApplicationProxy *)selectedApplicationDestination;
-(void)setSelectedApplicationDestination:(LSApplicationProxy *)arg1 ;
-(long long)transferStateResetCount;
-(SFAirDropTransferStateMachine *)transferStateMachine;
-(BOOL)saveToCloudDrive;
-(void)setSaveToCloudDrive:(BOOL)arg1 ;
-(void)setTransferCompleted:(BOOL)arg1 ;
-(BOOL)soundPlayed;
-(void)setSoundPlayed:(BOOL)arg1 ;
-(BOOL)isNonFileItem;
-(BOOL)isUnknownScheme;
-(BOOL)isUnknownFileType;
-(BOOL)isUndesiredMixOfItems;
-(BOOL)isOnlyPhotosOrVideos;
-(NSArray *)possibleApplicationDestinations;
-(void)setPossibleApplicationDestinations:(NSArray *)arg1 ;
-(BOOL)shouldAutoAccept;
-(void)setAutoAccept:(BOOL)arg1 ;
-(UIImage *)fileIcon;
-(void)setFileIcon:(UIImage *)arg1 ;
-(NSNumber *)filesCopied;
-(void)setFilesCopied:(NSNumber *)arg1 ;
-(void)setItemsDescriptionAdvanced:(NSDictionary *)arg1 ;
-(NSNumber *)bytesCopied;
-(void)setBytesCopied:(NSNumber *)arg1 ;
-(NSString *)senderComputerName;
-(void)setSenderComputerName:(NSString *)arg1 ;
-(NSString *)senderEmail;
-(void)setSenderEmail:(NSString *)arg1 ;
-(NSString *)senderEmailHash;
-(void)setSenderEmailHash:(NSString *)arg1 ;
-(void)setSenderCompositeName:(NSString *)arg1 ;
-(NSString *)senderFirstName;
-(void)setSenderFirstName:(NSString *)arg1 ;
-(NSString *)senderLastName;
-(void)setSenderLastName:(NSString *)arg1 ;
-(BOOL)senderIsMe;
-(void)setSenderIsMe:(BOOL)arg1 ;
-(void)setVerifiableIdentity:(BOOL)arg1 ;
@end

