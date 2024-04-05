#include <hv/WebSocketServer.h>

#include <list>
#include <thread>

class Net {
    private:
        //std::list<WebSocketChannelPtr> _channels;

        // pour gérer les noms de client :
        std::list<WebSocketChannelPtr> _pendings;
        std::map<WebSocketChannelPtr, std::string> _connections;

    public:
        Net() = default;
        Net(const Net &) = delete;

        void add(const WebSocketChannelPtr & c) {
            _pendings.push_front(c);
        }

        void del(const WebSocketChannelPtr & c) {
            auto it = std::find(_pendings.begin(), _pendings.end(), c);
            if (it != _pendings.end())
                _pendings.erase(it);
        }

        void map(const WebSocketChannelPtr channel, std::string msg) {
            std::string nom = "";
            for (const auto & c : _connections){
                if(channel == c.first){
                    nom = c.second;
                }
            }
            if(nom != ""){
                for (const auto & c : _connections){

                }
            }
        }

        // pour gérer les noms de client :
        bool giveName(const WebSocketChannelPtr& c, const std::string& n) {
            for (auto & conn : _connections){
                if (conn.second == n){
                    return false;
                }
            }
            _connections.insert(std::pair<WebSocketChannelPtr, std::string>(c, n));
            return true;
        }
        
        
        bool isPending(const WebSocketChannelPtr& c) const {
            for(auto & conn : _pendings){
                if(conn == c){
                    return true;
                }
            }
            return false;
        }
        
        std::optional<std::string> findName(const WebSocketChannelPtr& c) const {
            for(auto & conn : _connections){
                if(conn.first == c){
                    return conn.second;
                }
            }
            return {};
        }

};

