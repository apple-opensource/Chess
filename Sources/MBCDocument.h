/*
	File:		MBCDocument.h
	Contains:	Pseudo-document, used only for loading and saving
	Version:	1.0
	Copyright:	� 2003 by Apple Computer, Inc., all rights reserved.

	File Ownership:

		DRI:				Matthias Neeracher    x43683

	Writers:

		(MN)	Matthias Neeracher

	Change History (most recent first):

		$Log: MBCDocument.h,v $
		Revision 1.1  2003/04/02 18:41:01  neeri
		Support saving games
		
*/

#import <Cocoa/Cocoa.h>

@class MBCController;

@interface MBCDocument : NSDocument
{
	MBCController *	fController;
}

- (id) init;
- (id) initWithController:(MBCController *)controller;
- (BOOL) loadDataRepresentation:(NSData *)docData ofType:(NSString *)docType;
- (BOOL)writeToFile:(NSString *)fileName ofType:(NSString *)docType;
- (NSData *)dataRepresentationOfType:(NSString *)aType;

@end

// Local Variables:
// mode:ObjC
// End:
