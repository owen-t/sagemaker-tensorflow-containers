#ifndef RECORD_IO_READER_H
#define RECORD_IO_READER_H

#include <RecordReader.hpp>

namespace sagemaker {
namespace tensorflow {
    
    /**
       A RecordReader that reads RecordIO encoded records.

       Instances of this class use the MXNet RecordIO format, defined here: 
       https://mxnet.incubator.apache.org/architecture/note_data_loading.html
    */
    class RecordIOReader final : RecordReader {

    public:
        RecordIOReader(PipeReader& pipe_reader, std::size_t read_size, std::size_t buffer_capacity);
        bool ReadRecord(std::string* storage) override;
    private:
        std::size_t read_size_;
    }; 
} // sagemaker
} // tensorflow
#endif
