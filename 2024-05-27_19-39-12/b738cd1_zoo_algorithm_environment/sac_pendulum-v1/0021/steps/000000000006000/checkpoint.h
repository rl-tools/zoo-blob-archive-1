// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
namespace rl_tools::checkpoint::actor {
    namespace layer_0 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {139, 219, 139, 62, 222, 123, 103, 62, 207, 174, 43, 191, 93, 19, 3, 62, 250, 103, 46, 63, 222, 86, 50, 63, 205, 139, 182, 62, 125, 127, 200, 188, 183, 136, 5, 62, 33, 31, 128, 189, 53, 135, 47, 191, 232, 39, 149, 62, 84, 59, 29, 191, 218, 223, 201, 190, 252, 207, 116, 189, 102, 169, 134, 190, 125, 2, 44, 63, 242, 232, 253, 190, 143, 179, 127, 62, 172, 214, 91, 191, 214, 242, 217, 61, 124, 228, 168, 190, 168, 100, 38, 191, 19, 156, 209, 62, 225, 78, 69, 191, 216, 107, 79, 191, 150, 121, 61, 189, 148, 170, 239, 61, 215, 189, 50, 62, 204, 227, 59, 191, 220, 76, 3, 62, 105, 160, 77, 63, 232, 152, 23, 190, 85, 242, 226, 189, 52, 221, 51, 63, 180, 235, 168, 190, 177, 177, 103, 62, 202, 177, 37, 63, 243, 71, 44, 190, 21, 232, 61, 191, 243, 4, 36, 63, 148, 83, 187, 189, 201, 226, 63, 63, 31, 39, 86, 191, 92, 20, 72, 190, 122, 197, 37, 191, 70, 206, 121, 191, 225, 188, 150, 190, 230, 155, 36, 63, 190, 95, 128, 63, 12, 39, 249, 62, 228, 115, 190, 62, 213, 199, 123, 191, 75, 56, 60, 62, 63, 248, 239, 190, 52, 35, 58, 62, 138, 134, 40, 191, 98, 97, 214, 190, 87, 57, 182, 63, 60, 232, 207, 62, 255, 193, 248, 62, 173, 36, 93, 191, 111, 34, 238, 190, 180, 0, 237, 62, 50, 114, 91, 62, 6, 135, 17, 63, 8, 15, 73, 62, 136, 130, 23, 63, 37, 5, 6, 63, 128, 227, 183, 61, 230, 195, 82, 191, 52, 19, 26, 63, 92, 16, 127, 190, 52, 115, 9, 63, 43, 228, 7, 191, 121, 100, 133, 190, 210, 183, 133, 62, 65, 162, 64, 63, 92, 104, 101, 62, 76, 30, 91, 63, 90, 210, 158, 62, 208, 143, 103, 63, 7, 2, 8, 191, 223, 156, 1, 61, 18, 169, 170, 62, 240, 47, 8, 63, 234, 107, 245, 61, 23, 165, 205, 62, 130, 171, 92, 63, 48, 193, 194, 62, 161, 179, 109, 190, 158, 18, 108, 191, 219, 221, 239, 190, 155, 173, 5, 60, 73, 46, 248, 190, 7, 175, 221, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {43, 51, 139, 190, 155, 143, 208, 62, 174, 107, 205, 62, 252, 48, 32, 62, 103, 232, 208, 62, 20, 82, 5, 191, 236, 178, 36, 187, 148, 126, 43, 190, 156, 235, 222, 62, 172, 178, 246, 62, 212, 131, 107, 189, 72, 183, 140, 61, 123, 157, 17, 63, 61, 140, 123, 190, 158, 239, 192, 61, 55, 221, 250, 62, 114, 22, 161, 62, 138, 135, 143, 62, 22, 113, 1, 191, 201, 217, 71, 188, 0, 80, 198, 190, 220, 35, 203, 190, 239, 151, 225, 62, 118, 167, 18, 190, 184, 235, 178, 190, 183, 111, 139, 62, 225, 213, 210, 189, 85, 65, 128, 62, 201, 65, 186, 190, 123, 9, 227, 61, 28, 169, 221, 190, 177, 12, 25, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_0 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 3, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_1 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {92, 182, 106, 62, 163, 165, 139, 61, 229, 196, 240, 189, 179, 181, 180, 62, 27, 35, 204, 61, 242, 240, 23, 62, 134, 226, 169, 60, 92, 47, 44, 63, 161, 214, 73, 190, 1, 219, 48, 62, 191, 145, 101, 62, 161, 119, 202, 62, 53, 128, 3, 190, 26, 167, 103, 60, 216, 1, 195, 188, 104, 99, 242, 59, 238, 37, 66, 190, 133, 80, 211, 189, 218, 196, 198, 60, 174, 104, 37, 62, 49, 102, 224, 61, 233, 133, 45, 190, 138, 4, 145, 190, 184, 62, 5, 61, 119, 51, 125, 59, 118, 203, 15, 191, 241, 107, 143, 60, 157, 239, 95, 190, 82, 161, 188, 189, 54, 52, 9, 190, 98, 38, 40, 188, 172, 31, 42, 61, 47, 212, 21, 62, 152, 174, 199, 61, 16, 83, 229, 60, 13, 219, 68, 190, 203, 139, 79, 189, 116, 178, 207, 190, 234, 183, 146, 61, 17, 18, 169, 190, 146, 94, 193, 60, 162, 236, 117, 190, 42, 120, 209, 190, 130, 28, 215, 62, 196, 82, 30, 62, 237, 16, 51, 61, 98, 207, 23, 61, 201, 157, 194, 188, 1, 222, 177, 190, 217, 163, 238, 189, 84, 43, 140, 190, 85, 124, 223, 62, 141, 132, 180, 62, 118, 174, 26, 190, 106, 238, 7, 62, 79, 178, 148, 62, 96, 190, 140, 62, 41, 34, 189, 62, 143, 216, 210, 190, 2, 127, 151, 62, 134, 50, 216, 190, 237, 43, 182, 190, 64, 57, 39, 190, 212, 220, 142, 190, 162, 241, 131, 190, 204, 146, 249, 189, 16, 180, 228, 61, 244, 11, 41, 60, 20, 234, 39, 61, 16, 143, 12, 190, 162, 16, 175, 61, 41, 28, 155, 61, 3, 135, 188, 62, 219, 51, 37, 62, 88, 41, 80, 190, 241, 87, 194, 189, 160, 143, 48, 190, 55, 116, 144, 190, 115, 169, 150, 190, 229, 122, 110, 62, 216, 192, 111, 190, 202, 160, 24, 62, 212, 95, 246, 188, 224, 205, 16, 191, 95, 59, 248, 189, 132, 156, 40, 190, 194, 77, 59, 190, 186, 103, 196, 189, 23, 101, 130, 190, 45, 34, 187, 189, 186, 212, 21, 190, 191, 53, 220, 190, 240, 13, 227, 188, 2, 127, 178, 189, 152, 180, 10, 190, 139, 235, 15, 62, 152, 80, 77, 190, 46, 179, 148, 191, 218, 49, 45, 190, 141, 151, 69, 62, 27, 190, 204, 62, 40, 255, 150, 61, 5, 109, 174, 188, 41, 243, 37, 63, 207, 169, 174, 62, 236, 126, 124, 62, 119, 26, 194, 62, 67, 104, 183, 190, 111, 144, 128, 61, 146, 12, 143, 62, 96, 159, 173, 190, 1, 48, 153, 62, 246, 78, 183, 61, 166, 16, 137, 190, 189, 232, 184, 62, 82, 3, 227, 190, 11, 215, 131, 188, 132, 80, 207, 60, 126, 206, 67, 191, 2, 53, 4, 191, 66, 55, 134, 190, 178, 9, 240, 190, 166, 204, 53, 190, 146, 83, 191, 187, 204, 33, 3, 190, 92, 109, 147, 62, 148, 140, 182, 58, 226, 32, 167, 61, 168, 220, 164, 190, 151, 96, 199, 190, 242, 92, 102, 62, 223, 78, 105, 62, 60, 154, 97, 62, 6, 129, 151, 62, 77, 252, 192, 61, 160, 95, 161, 62, 116, 166, 22, 62, 141, 209, 148, 62, 60, 116, 163, 62, 121, 17, 61, 190, 187, 32, 139, 62, 38, 32, 198, 189, 92, 230, 7, 191, 2, 61, 49, 189, 145, 241, 131, 62, 137, 132, 170, 189, 237, 140, 50, 61, 53, 9, 12, 191, 22, 57, 233, 190, 56, 136, 61, 62, 167, 217, 206, 189, 149, 184, 50, 190, 237, 240, 142, 190, 139, 185, 151, 190, 31, 198, 191, 62, 198, 127, 153, 189, 206, 218, 147, 61, 184, 189, 60, 62, 248, 63, 239, 189, 179, 195, 82, 62, 173, 115, 85, 190, 86, 46, 38, 190, 255, 54, 20, 61, 174, 135, 234, 61, 15, 102, 173, 190, 77, 95, 50, 62, 32, 204, 180, 190, 151, 197, 171, 189, 85, 227, 221, 190, 231, 108, 211, 61, 49, 11, 207, 61, 108, 159, 254, 61, 45, 3, 124, 62, 221, 133, 22, 190, 183, 23, 160, 190, 20, 129, 25, 190, 212, 160, 49, 62, 88, 127, 83, 190, 240, 2, 12, 190, 17, 223, 15, 62, 122, 245, 167, 190, 184, 25, 232, 59, 235, 35, 91, 190, 225, 126, 31, 190, 243, 181, 127, 61, 72, 10, 43, 61, 45, 158, 137, 62, 144, 187, 172, 189, 171, 78, 100, 61, 132, 210, 113, 62, 209, 154, 136, 60, 83, 63, 216, 189, 146, 49, 154, 189, 30, 167, 212, 189, 198, 191, 8, 62, 254, 183, 58, 62, 182, 79, 188, 189, 148, 165, 141, 62, 161, 252, 133, 61, 75, 139, 215, 60, 31, 78, 146, 188, 92, 69, 209, 188, 209, 47, 175, 62, 233, 79, 176, 190, 53, 7, 45, 62, 28, 54, 65, 62, 129, 210, 81, 190, 52, 207, 197, 189, 228, 116, 164, 60, 12, 17, 47, 61, 97, 138, 72, 62, 139, 157, 173, 190, 34, 46, 189, 190, 77, 220, 54, 190, 239, 36, 55, 190, 139, 58, 20, 190, 142, 36, 22, 190, 87, 124, 247, 61, 217, 243, 100, 188, 183, 16, 21, 62, 25, 13, 216, 190, 245, 61, 73, 62, 54, 28, 105, 190, 243, 28, 78, 62, 200, 152, 139, 60, 34, 147, 156, 189, 64, 2, 138, 187, 198, 236, 191, 190, 81, 112, 163, 190, 108, 229, 117, 190, 225, 25, 128, 62, 84, 50, 153, 190, 155, 221, 181, 189, 196, 242, 78, 61, 24, 138, 208, 189, 190, 53, 56, 62, 134, 84, 70, 62, 149, 63, 130, 190, 210, 97, 138, 62, 109, 115, 60, 188, 42, 211, 98, 60, 119, 12, 241, 61, 238, 83, 139, 61, 61, 28, 26, 189, 37, 193, 126, 62, 49, 59, 134, 61, 27, 53, 61, 190, 106, 16, 77, 60, 77, 71, 73, 62, 10, 196, 102, 190, 214, 81, 138, 62, 89, 205, 219, 61, 193, 25, 254, 62, 85, 30, 239, 61, 10, 107, 140, 189, 37, 120, 232, 188, 206, 28, 237, 186, 143, 211, 96, 62, 250, 39, 187, 189, 53, 222, 170, 190, 152, 221, 104, 62, 156, 191, 155, 190, 57, 40, 3, 62, 207, 218, 61, 190, 182, 204, 205, 61, 203, 125, 183, 190, 107, 247, 117, 188, 194, 77, 20, 63, 219, 126, 132, 61, 105, 90, 233, 62, 40, 249, 128, 190, 121, 223, 151, 190, 156, 235, 131, 189, 36, 189, 173, 188, 202, 24, 28, 191, 12, 146, 124, 62, 71, 215, 22, 62, 186, 150, 162, 60, 13, 223, 149, 61, 205, 235, 114, 62, 77, 38, 243, 62, 11, 87, 161, 62, 243, 173, 123, 190, 47, 173, 102, 190, 213, 3, 188, 61, 224, 254, 149, 190, 127, 185, 113, 61, 139, 42, 132, 191, 94, 108, 82, 62, 252, 79, 38, 189, 132, 60, 144, 189, 109, 242, 236, 189, 61, 53, 67, 62, 43, 231, 185, 61, 247, 121, 178, 190, 28, 79, 203, 188, 131, 208, 59, 189, 184, 21, 31, 190, 175, 88, 154, 62, 122, 35, 152, 189, 95, 11, 61, 61, 11, 90, 156, 62, 130, 63, 126, 62, 203, 149, 145, 190, 200, 183, 14, 62, 23, 22, 207, 189, 122, 43, 86, 189, 134, 28, 101, 62, 91, 162, 37, 62, 33, 88, 135, 190, 9, 164, 226, 61, 155, 116, 200, 189, 123, 244, 143, 189, 226, 148, 37, 62, 187, 0, 28, 190, 16, 84, 226, 62, 17, 98, 202, 190, 192, 205, 7, 189, 67, 159, 224, 190, 44, 109, 52, 189, 108, 67, 142, 188, 50, 198, 137, 62, 250, 198, 98, 62, 234, 42, 151, 190, 112, 16, 120, 62, 162, 97, 255, 190, 217, 153, 184, 62, 203, 135, 36, 189, 5, 94, 63, 62, 41, 182, 134, 189, 143, 47, 142, 190, 191, 203, 155, 62, 159, 124, 25, 190, 55, 67, 217, 188, 17, 108, 142, 62, 221, 187, 65, 189, 202, 243, 181, 189, 45, 97, 173, 62, 219, 15, 160, 190, 24, 12, 129, 61, 181, 144, 129, 61, 162, 139, 143, 188, 3, 1, 15, 62, 185, 212, 136, 62, 109, 194, 70, 62, 232, 218, 136, 62, 91, 123, 84, 189, 245, 108, 109, 60, 100, 89, 113, 61, 45, 21, 179, 61, 51, 171, 166, 62, 108, 250, 122, 61, 9, 140, 116, 61, 86, 31, 2, 62, 54, 234, 205, 61, 43, 121, 210, 189, 155, 12, 21, 191, 62, 76, 5, 61, 208, 29, 136, 190, 207, 85, 187, 190, 127, 4, 185, 189, 200, 229, 158, 189, 59, 71, 166, 62, 74, 23, 205, 189, 177, 244, 96, 61, 209, 122, 243, 189, 135, 13, 163, 189, 19, 21, 116, 60, 145, 80, 58, 189, 69, 253, 126, 190, 110, 90, 155, 61, 16, 15, 110, 61, 84, 152, 129, 59, 63, 155, 34, 62, 66, 93, 73, 190, 77, 125, 169, 190, 24, 27, 63, 190, 132, 130, 240, 59, 120, 67, 155, 62, 212, 63, 228, 189, 93, 123, 16, 63, 202, 194, 148, 61, 59, 242, 68, 62, 226, 129, 201, 188, 254, 119, 104, 61, 180, 108, 226, 60, 17, 14, 243, 189, 236, 15, 210, 190, 108, 3, 178, 59, 254, 152, 160, 190, 192, 113, 227, 61, 31, 243, 230, 190, 68, 75, 150, 61, 232, 123, 91, 190, 183, 140, 64, 190, 144, 202, 180, 62, 44, 124, 225, 61, 117, 113, 220, 61, 99, 249, 116, 61, 65, 87, 87, 189, 57, 188, 170, 190, 82, 24, 21, 61, 253, 231, 167, 190, 52, 55, 19, 62, 47, 232, 13, 188, 224, 61, 33, 190, 98, 45, 42, 62, 134, 215, 181, 58, 195, 222, 43, 62, 40, 31, 168, 61, 89, 234, 237, 190, 191, 57, 133, 189, 23, 121, 56, 190, 206, 223, 168, 190, 138, 59, 130, 62, 211, 250, 203, 189, 111, 238, 37, 62, 130, 49, 34, 61, 166, 115, 102, 61, 144, 144, 231, 190, 104, 226, 131, 190, 70, 86, 73, 190, 31, 3, 160, 190, 246, 221, 115, 190, 38, 249, 175, 189, 47, 204, 130, 61, 42, 80, 1, 62, 0, 179, 8, 189, 139, 9, 59, 61, 11, 255, 33, 190, 212, 191, 199, 188, 27, 93, 33, 190, 61, 84, 152, 62, 142, 202, 24, 191, 212, 181, 44, 190, 102, 190, 76, 62, 110, 119, 186, 61, 230, 121, 121, 190, 179, 10, 77, 62, 127, 202, 196, 190, 206, 27, 3, 188, 72, 68, 231, 189, 73, 177, 163, 61, 241, 190, 81, 62, 90, 178, 99, 189, 179, 39, 140, 62, 149, 53, 187, 61, 152, 84, 198, 60, 143, 132, 162, 189, 122, 253, 90, 189, 152, 2, 18, 189, 127, 212, 21, 190, 151, 0, 212, 60, 52, 104, 148, 62, 250, 109, 56, 190, 70, 78, 78, 61, 57, 177, 24, 62, 156, 23, 106, 62, 13, 226, 108, 62, 74, 150, 57, 190, 221, 231, 64, 62, 5, 212, 119, 59, 154, 173, 100, 190, 61, 74, 141, 188, 249, 189, 129, 62, 225, 129, 241, 189, 142, 33, 94, 62, 39, 151, 254, 189, 59, 145, 74, 190, 211, 104, 173, 61, 36, 166, 180, 61, 113, 225, 69, 60, 165, 18, 0, 190, 89, 13, 132, 188, 243, 67, 169, 189, 138, 131, 112, 61, 6, 220, 177, 190, 30, 101, 132, 62, 36, 235, 124, 189, 242, 81, 13, 62, 172, 143, 75, 61, 136, 254, 15, 56, 34, 70, 82, 189, 50, 229, 139, 190, 95, 252, 131, 190, 206, 65, 184, 61, 167, 1, 66, 191, 249, 79, 231, 188, 235, 190, 138, 191, 131, 198, 87, 62, 242, 254, 155, 62, 14, 201, 55, 61, 0, 64, 97, 62, 123, 191, 145, 61, 81, 24, 210, 190, 160, 229, 19, 191, 80, 19, 101, 62, 234, 164, 16, 191, 96, 166, 222, 189, 156, 113, 183, 61, 152, 194, 193, 190, 217, 167, 195, 61, 21, 13, 91, 61, 131, 58, 50, 190, 239, 23, 18, 61, 187, 84, 64, 61, 90, 51, 88, 189, 25, 199, 29, 190, 129, 223, 87, 190, 108, 67, 146, 61, 154, 156, 241, 190, 86, 50, 155, 189, 166, 78, 191, 190, 177, 71, 218, 61, 119, 247, 44, 62, 25, 109, 212, 61, 237, 250, 120, 62, 131, 183, 134, 188, 141, 15, 16, 189, 217, 112, 159, 61, 112, 149, 83, 189, 186, 85, 75, 190, 63, 131, 158, 188, 105, 82, 151, 62, 93, 64, 64, 190, 141, 92, 202, 189, 245, 5, 210, 61, 210, 241, 233, 60, 114, 241, 131, 62, 222, 238, 0, 62, 175, 25, 84, 190, 22, 251, 37, 189, 136, 116, 29, 191, 252, 115, 203, 61, 177, 131, 73, 62, 133, 73, 124, 62, 203, 65, 245, 189, 168, 252, 182, 61, 72, 217, 228, 61, 80, 166, 243, 189, 17, 85, 1, 190, 185, 120, 210, 59, 125, 202, 31, 191, 42, 151, 54, 189, 1, 180, 64, 62, 217, 225, 65, 61, 219, 176, 84, 62, 24, 231, 233, 62, 66, 132, 47, 190, 78, 8, 139, 62, 210, 157, 138, 62, 1, 239, 148, 62, 20, 160, 51, 190, 80, 155, 15, 61, 14, 79, 95, 62, 197, 189, 160, 62, 53, 184, 178, 62, 75, 250, 6, 62, 142, 29, 197, 62, 246, 30, 2, 62, 125, 193, 88, 190, 224, 64, 52, 62, 128, 100, 131, 188, 26, 82, 102, 62, 167, 230, 63, 189, 183, 22, 110, 190, 142, 226, 138, 190, 135, 181, 3, 189, 11, 223, 195, 61, 199, 82, 9, 191, 54, 243, 42, 190, 128, 244, 148, 190, 0, 203, 0, 190, 23, 242, 141, 189, 68, 56, 52, 61, 169, 135, 188, 62, 151, 223, 149, 61, 209, 199, 142, 189, 116, 135, 112, 189, 10, 166, 40, 62, 43, 142, 152, 61, 61, 241, 159, 60, 4, 30, 60, 61, 78, 188, 182, 61, 177, 204, 21, 190, 114, 0, 129, 189, 175, 136, 244, 189, 183, 221, 21, 188, 94, 77, 119, 61, 202, 10, 77, 61, 196, 135, 232, 189, 147, 242, 17, 190, 138, 182, 0, 190, 40, 92, 198, 189, 114, 61, 184, 189, 15, 106, 50, 62, 24, 41, 29, 190, 211, 72, 21, 61, 4, 38, 29, 190, 209, 108, 245, 189, 66, 152, 209, 61, 34, 59, 53, 60, 242, 96, 113, 189, 234, 169, 14, 190, 122, 48, 3, 61, 250, 26, 32, 190, 31, 58, 14, 62, 128, 160, 3, 190, 123, 171, 109, 61, 162, 53, 61, 62, 94, 239, 13, 189, 23, 84, 143, 190, 51, 54, 65, 62, 42, 169, 240, 190, 141, 142, 173, 62, 163, 193, 109, 190, 242, 160, 88, 62, 138, 60, 156, 189, 214, 239, 197, 190, 239, 103, 186, 62, 92, 50, 213, 188, 44, 104, 19, 189, 226, 62, 27, 61, 116, 179, 174, 61, 65, 129, 24, 190, 180, 214, 95, 62, 102, 173, 82, 190, 0, 74, 0, 62, 71, 187, 85, 61, 112, 12, 228, 189, 190, 241, 79, 60, 172, 186, 159, 62, 136, 50, 84, 62, 82, 115, 26, 62, 130, 151, 244, 190, 158, 188, 10, 190, 8, 228, 196, 190, 190, 196, 87, 190, 253, 139, 76, 62, 177, 240, 57, 190, 83, 119, 25, 190, 122, 203, 73, 61, 109, 114, 149, 60, 220, 174, 156, 61, 149, 227, 209, 188, 9, 12, 241, 61, 57, 6, 182, 190, 168, 75, 18, 61, 239, 193, 94, 191, 220, 111, 9, 62, 159, 12, 158, 62, 185, 132, 171, 60, 46, 28, 75, 62, 253, 39, 181, 62, 129, 182, 158, 190, 243, 85, 18, 191, 32, 159, 123, 62, 107, 51, 133, 190, 105, 136, 157, 61, 63, 235, 197, 61, 152, 61, 11, 190, 204, 212, 8, 190, 228, 208, 175, 60, 109, 234, 74, 190, 43, 94, 15, 190, 54, 70, 134, 189, 239, 16, 46, 186, 155, 226, 51, 62, 182, 200, 129, 190, 144, 108, 49, 60, 231, 228, 205, 190, 37, 183, 188, 61, 26, 238, 254, 190, 19, 7, 89, 189, 94, 223, 125, 62, 197, 125, 135, 61, 130, 163, 148, 189, 233, 144, 31, 63, 239, 17, 88, 189, 100, 37, 94, 62, 186, 137, 228, 189, 69, 149, 217, 62, 6, 166, 202, 62, 193, 28, 5, 191, 180, 30, 207, 61, 145, 247, 32, 62, 227, 19, 42, 191, 99, 0, 121, 61, 1, 172, 64, 62, 245, 205, 132, 190, 20, 92, 194, 62, 172, 43, 253, 189, 1, 113, 110, 191, 178, 15, 20, 62, 141, 99, 236, 189, 126, 214, 136, 190, 168, 107, 208, 190, 207, 82, 24, 190, 120, 39, 191, 62, 203, 69, 229, 62, 254, 84, 75, 189, 142, 225, 170, 62, 255, 98, 138, 190, 150, 202, 223, 61, 123, 226, 217, 189, 133, 219, 186, 61, 124, 246, 102, 62, 224, 96, 210, 61, 14, 170, 130, 62, 125, 254, 38, 62, 30, 54, 41, 60, 8, 254, 72, 188, 127, 38, 226, 189, 232, 45, 213, 61, 155, 251, 152, 62, 166, 246, 24, 190, 213, 161, 155, 62, 183, 204, 58, 60, 3, 24, 85, 190, 71, 64, 69, 189, 24, 197, 101, 60, 199, 173, 140, 61, 142, 52, 85, 61, 242, 161, 31, 190, 69, 240, 40, 190, 168, 67, 134, 189, 66, 130, 182, 61, 195, 111, 188, 189, 43, 37, 92, 190, 129, 101, 138, 189, 47, 233, 21, 190, 129, 125, 40, 62, 255, 182, 16, 191, 3, 106, 217, 61, 248, 124, 71, 61, 175, 30, 147, 61, 49, 99, 207, 61, 207, 212, 139, 190, 185, 238, 160, 62, 149, 153, 149, 62, 186, 188, 210, 189, 62, 51, 2, 189, 33, 84, 235, 61, 235, 125, 217, 61, 145, 147, 128, 189, 177, 154, 251, 61, 184, 133, 19, 190, 205, 99, 241, 62, 247, 179, 158, 61, 44, 148, 181, 190, 241, 86, 94, 62, 140, 111, 158, 189, 240, 185, 10, 190, 212, 189, 164, 62, 206, 181, 252, 61, 251, 15, 245, 189, 38, 204, 60, 189, 230, 233, 124, 190, 177, 40, 78, 190, 178, 162, 28, 60, 43, 236, 46, 61, 255, 79, 168, 190, 78, 88, 147, 190, 62, 24, 188, 62, 129, 242, 34, 189, 70, 180, 115, 190, 251, 82, 221, 61, 117, 120, 130, 62, 156, 35, 25, 190, 6, 21, 152, 189, 46, 12, 205, 188, 190, 142, 58, 61, 254, 67, 91, 61, 13, 92, 178, 189, 122, 62, 146, 187, 243, 136, 103, 189, 134, 165, 88, 189, 3, 126, 1, 190, 45, 171, 33, 190, 156, 158, 129, 189, 189, 186, 232, 61, 42, 158, 16, 60, 110, 51, 16, 190, 130, 99, 195, 189, 169, 39, 207, 189, 241, 120, 16, 190, 105, 152, 52, 61, 186, 143, 133, 188, 116, 197, 126, 188, 192, 128, 149, 189, 143, 153, 147, 189, 57, 97, 45, 188, 230, 161, 153, 188, 224, 15, 48, 62, 65, 89, 4, 62, 185, 10, 146, 60, 32, 39, 41, 62, 251, 249, 9, 190, 202, 108, 226, 189, 16, 27, 226, 61, 185, 47, 212, 62, 117, 79, 122, 61, 174, 43, 164, 189, 8, 219, 211, 61, 3, 249, 234, 189, 90, 185, 109, 190, 161, 65, 43, 62, 91, 133, 160, 61, 158, 233, 91, 60, 163, 95, 40, 190, 217, 185, 33, 190, 249, 55, 234, 188, 127, 233, 137, 190, 84, 71, 35, 191, 217, 169, 63, 61, 187, 65, 227, 189, 121, 18, 177, 190, 251, 255, 130, 60, 42, 32, 6, 190, 14, 118, 59, 189, 18, 145, 195, 62, 203, 231, 144, 190, 187, 58, 29, 60, 200, 111, 156, 61, 15, 233, 227, 61, 250, 100, 41, 189, 83, 103, 163, 190, 92, 152, 25, 62, 157, 84, 15, 61, 59, 175, 217, 190, 128, 240, 226, 187, 52, 191, 69, 61, 2, 221, 201, 59, 179, 224, 125, 62, 44, 203, 169, 61, 226, 61, 166, 190, 219, 179, 146, 61, 9, 163, 5, 191, 2, 47, 238, 61, 87, 59, 94, 189, 84, 10, 65, 62, 194, 100, 210, 60, 79, 96, 158, 190, 145, 96, 154, 62, 180, 233, 26, 189, 165, 15, 178, 61, 61, 179, 98, 189, 92, 90, 179, 61, 115, 150, 111, 190, 143, 126, 111, 62, 245, 223, 178, 190, 183, 26, 80, 62, 142, 123, 19, 62, 127, 178, 149, 190, 249, 121, 115, 62, 207, 255, 111, 62, 34, 138, 45, 62, 204, 121, 85, 62, 28, 167, 12, 191, 248, 10, 222, 60, 77, 154, 195, 190, 240, 53, 186, 190, 58, 69, 137, 62, 8, 75, 175, 189, 147, 181, 54, 62, 58, 245, 71, 62, 41, 146, 205, 60, 184, 235, 239, 61, 54, 235, 198, 189, 107, 133, 43, 189, 24, 123, 214, 60, 203, 216, 164, 189, 33, 52, 164, 189, 128, 220, 45, 190, 10, 31, 2, 190, 227, 115, 71, 62, 235, 11, 142, 190, 220, 198, 177, 61, 138, 216, 195, 62, 57, 193, 47, 190, 129, 187, 10, 62, 192, 37, 211, 189, 55, 67, 142, 59, 7, 199, 46, 62, 168, 173, 71, 62, 109, 255, 113, 189, 218, 5, 88, 59, 182, 29, 151, 61, 72, 138, 224, 61, 22, 69, 143, 62, 11, 35, 55, 62, 238, 57, 20, 62, 79, 217, 144, 61, 195, 130, 103, 61, 93, 1, 78, 62, 198, 81, 27, 190, 136, 254, 176, 61, 96, 38, 150, 190, 99, 121, 9, 190, 103, 191, 11, 190, 225, 132, 19, 190, 238, 66, 15, 190, 46, 59, 184, 189, 141, 107, 46, 190, 74, 110, 175, 61, 226, 69, 35, 190, 226, 9, 133, 190, 10, 124, 163, 189, 9, 102, 215, 189, 156, 105, 3, 188, 38, 166, 232, 189, 165, 134, 197, 61, 162, 11, 166, 189, 36, 138, 67, 190, 229, 108, 144, 188, 183, 179, 100, 61, 48, 74, 15, 190, 129, 73, 98, 189, 227, 13, 152, 61, 106, 176, 67, 190, 100, 49, 233, 189, 168, 128, 44, 60, 238, 35, 110, 61, 239, 235, 42, 190, 122, 157, 128, 189, 19, 31, 163, 190, 246, 153, 129, 61, 32, 6, 65, 190, 92, 118, 22, 190, 126, 1, 175, 190, 90, 127, 229, 188, 131, 255, 132, 62, 116, 65, 202, 60, 11, 250, 207, 62, 72, 200, 47, 189, 115, 103, 93, 62, 205, 190, 111, 62, 71, 195, 22, 62, 84, 191, 122, 62, 18, 180, 250, 190, 166, 17, 130, 61, 241, 72, 1, 187, 27, 93, 141, 190, 7, 178, 222, 61, 133, 49, 156, 62, 164, 190, 162, 190, 145, 60, 172, 62, 6, 227, 149, 190, 12, 40, 128, 189, 48, 113, 141, 62, 115, 120, 5, 190, 12, 76, 132, 190, 143, 191, 5, 190, 165, 72, 94, 190, 31, 191, 174, 62, 74, 64, 26, 188, 180, 167, 216, 60, 125, 213, 89, 62, 132, 104, 108, 61, 219, 29, 173, 61, 211, 65, 123, 62, 150, 151, 51, 62, 255, 52, 227, 187, 70, 224, 201, 190, 198, 237, 191, 61, 65, 138, 242, 190, 114, 222, 20, 189, 231, 148, 132, 190, 103, 183, 80, 189, 145, 5, 133, 189, 233, 143, 114, 190, 196, 109, 223, 62, 238, 240, 21, 62, 127, 203, 157, 62, 166, 219, 247, 58, 40, 51, 202, 189, 130, 119, 142, 190, 177, 228, 163, 188, 95, 225, 142, 190, 169, 54, 131, 62, 41, 109, 17, 62, 63, 4, 43, 190, 60, 37, 36, 62, 88, 30, 80, 62, 24, 4, 209, 61, 73, 128, 122, 62, 64, 206, 250, 190, 47, 84, 192, 189, 76, 96, 9, 191, 237, 186, 142, 190, 12, 112, 24, 62, 120, 102, 224, 190, 12, 41, 163, 190, 177, 112, 185, 190, 130, 211, 62, 189, 77, 131, 175, 62, 179, 131, 143, 62, 216, 193, 9, 63, 231, 50, 173, 189, 77, 144, 149, 62, 198, 194, 160, 189, 231, 128, 73, 62, 193, 250, 171, 62, 159, 43, 143, 190, 25, 154, 168, 188, 221, 38, 36, 62, 243, 190, 242, 189, 140, 159, 51, 62, 118, 170, 51, 61, 222, 159, 164, 190, 79, 42, 170, 62, 29, 247, 255, 190, 9, 158, 99, 190, 190, 197, 15, 190, 106, 169, 187, 190, 156, 122, 107, 190, 116, 103, 171, 189, 215, 144, 18, 189, 127, 46, 45, 61, 109, 207, 133, 62, 200, 193, 175, 190, 121, 29, 80, 62, 35, 49, 35, 188, 133, 65, 111, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {32, 89, 191, 61, 6, 183, 139, 60, 162, 43, 226, 61, 170, 131, 59, 189, 111, 199, 19, 62, 247, 110, 126, 189, 175, 224, 118, 62, 212, 177, 208, 188, 197, 184, 205, 61, 206, 58, 131, 60, 89, 86, 36, 62, 141, 100, 217, 189, 216, 203, 24, 62, 45, 1, 59, 190, 23, 100, 157, 61, 251, 65, 36, 62, 172, 159, 227, 61, 139, 235, 178, 61, 79, 150, 152, 189, 148, 105, 137, 62, 89, 136, 41, 189, 199, 255, 94, 61, 233, 3, 9, 62, 172, 63, 136, 62, 169, 48, 27, 190, 32, 34, 145, 189, 207, 49, 1, 189, 249, 71, 30, 190, 179, 194, 221, 61, 170, 73, 160, 61, 243, 127, 198, 187, 79, 95, 9, 189};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_1 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_2 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {63, 102, 65, 62, 210, 127, 28, 63, 19, 147, 28, 191, 122, 5, 28, 191, 199, 235, 49, 191, 143, 246, 76, 190, 150, 188, 176, 190, 28, 43, 77, 62, 209, 109, 13, 63, 121, 247, 225, 61, 238, 252, 99, 62, 197, 136, 219, 62, 17, 196, 254, 62, 224, 224, 137, 190, 223, 104, 172, 189, 19, 240, 250, 190, 106, 19, 164, 190, 145, 149, 196, 62, 253, 76, 51, 190, 239, 85, 202, 62, 29, 54, 221, 190, 67, 96, 16, 191, 198, 168, 70, 189, 242, 222, 42, 62, 134, 54, 6, 62, 167, 103, 217, 190, 130, 195, 240, 62, 54, 223, 93, 190, 46, 201, 211, 185, 89, 121, 192, 190, 31, 198, 38, 63, 147, 110, 157, 190, 63, 32, 99, 61, 246, 167, 72, 62, 5, 16, 102, 62, 117, 22, 184, 189, 182, 167, 206, 189, 41, 216, 145, 62, 35, 180, 150, 190, 7, 123, 81, 189, 146, 217, 201, 189, 228, 119, 136, 190, 90, 216, 38, 190, 186, 183, 4, 63, 112, 71, 157, 187, 49, 58, 5, 62, 115, 82, 20, 190, 74, 135, 70, 190, 153, 101, 122, 61, 53, 103, 239, 60, 117, 70, 145, 61, 240, 107, 205, 188, 227, 97, 48, 190, 43, 151, 54, 62, 236, 134, 117, 190, 210, 210, 30, 190, 73, 56, 150, 189, 70, 53, 117, 62, 213, 178, 3, 62, 43, 12, 203, 61, 18, 29, 39, 62, 89, 133, 34, 62, 133, 137, 197, 61, 68, 212, 197, 60};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 2, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {152, 171, 130, 60, 159, 141, 167, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_2 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace model_definition {
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward; 
        using IF = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Interface<CAPABILITY>;
        using MODEL = IF::Module<layer_0::TEMPLATE, IF::Module<layer_1::TEMPLATE, IF::Module<layer_2::TEMPLATE>>>;
    }
    using MODEL = model_definition::MODEL;
    const MODEL model = {layer_0::layer, {layer_1::layer, {layer_2::layer, {}}}};
}
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::input {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {7, 186, 171, 191, 141, 218, 178, 191, 121, 193, 137, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {2, 206, 217, 191, 68, 55, 215, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0021/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}