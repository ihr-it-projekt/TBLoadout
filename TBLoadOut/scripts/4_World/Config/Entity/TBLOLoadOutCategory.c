class TBLOLoadOutCategory {
    string name;
    ref array<ref TBLOLoadOutType> items;

    void TBLOLoadOutCategory(string _name, array<ref TBLOLoadOutType> _items) {
        this.name = _name;
        this.items = _items;
    }

    void UpdateV3() {
        foreach(TBLOLoadOutType item: items) {
            item.UpdateV3();
        }
    }

}
