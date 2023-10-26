class TBLOLoadOutType
{
    string type;
    string displayName = "";
    int quickBarEntityShortcut;
    float minHealth = 100;
    float maxHealth = 100;
    ref array<ref TBLOLoadOutType> attachments;

    void TBLOLoadOutType(string _type, array<ref TBLOLoadOutType> _attachments = null, int _quickBarEntityShortcut = -1) {
        this.type = _type;
		this.attachments = _attachments;
		this.quickBarEntityShortcut = _quickBarEntityShortcut;
    }

    void UpdateV3() {
        minHealth = 100;
        maxHealth = 100;

        if (attachments) {
            foreach(TBLOLoadOutType item: attachments) {
                item.UpdateV3();
            }
        }
     }
}
