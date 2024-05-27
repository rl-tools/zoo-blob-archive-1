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
                alignas(float) const unsigned char memory[] = {147, 17, 42, 191, 23, 34, 130, 62, 152, 57, 41, 63, 53, 41, 11, 189, 31, 156, 229, 190, 103, 206, 190, 62, 38, 9, 43, 63, 19, 36, 54, 191, 182, 7, 231, 190, 113, 247, 25, 191, 33, 94, 158, 191, 101, 178, 144, 190, 186, 162, 239, 190, 47, 73, 51, 62, 207, 163, 152, 190, 127, 102, 16, 63, 190, 159, 211, 189, 241, 74, 47, 62, 231, 152, 80, 191, 124, 196, 203, 189, 67, 10, 174, 61, 156, 196, 25, 63, 233, 149, 41, 191, 35, 219, 19, 191, 80, 102, 170, 59, 226, 40, 50, 62, 124, 100, 136, 190, 81, 238, 179, 190, 84, 156, 85, 63, 89, 143, 179, 190, 5, 181, 19, 63, 211, 202, 83, 61, 113, 121, 33, 191, 196, 237, 173, 190, 50, 18, 28, 63, 167, 171, 44, 188, 218, 31, 196, 62, 142, 28, 130, 190, 111, 30, 1, 63, 11, 225, 243, 190, 250, 241, 151, 62, 72, 129, 161, 60, 47, 200, 151, 62, 144, 170, 63, 191, 216, 61, 111, 190, 27, 68, 87, 191, 131, 70, 149, 189, 133, 3, 66, 61, 22, 84, 20, 63, 87, 146, 54, 191, 191, 90, 207, 62, 85, 124, 223, 189, 41, 170, 94, 191, 2, 87, 59, 62, 14, 153, 72, 189, 68, 241, 205, 189, 60, 86, 217, 62, 221, 2, 131, 190, 10, 166, 141, 191, 83, 244, 221, 190, 230, 245, 23, 190, 152, 183, 200, 189, 245, 164, 23, 63, 214, 144, 0, 63, 157, 133, 63, 63, 11, 77, 201, 62, 194, 212, 242, 62, 217, 156, 114, 62, 152, 166, 223, 190, 235, 133, 71, 191, 186, 221, 48, 62, 80, 29, 226, 188, 237, 97, 252, 188, 202, 154, 26, 190, 251, 14, 253, 62, 106, 214, 247, 189, 47, 70, 238, 190, 33, 24, 180, 62, 37, 39, 253, 190, 111, 134, 165, 190, 158, 164, 35, 190, 87, 255, 74, 63, 102, 16, 52, 63, 165, 11, 238, 62, 202, 89, 253, 62, 25, 54, 191, 189, 119, 25, 68, 190, 64, 32, 62, 63, 236, 151, 232, 62, 32, 127, 36, 59, 28, 241, 5, 191, 153, 174, 42, 191, 148, 189, 205, 62, 94, 42, 7, 63, 173, 23, 93, 63, 101, 90, 7, 63};
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
                alignas(float) const unsigned char memory[] = {93, 127, 7, 190, 32, 209, 72, 190, 40, 188, 70, 62, 75, 143, 181, 189, 203, 144, 167, 61, 114, 214, 168, 62, 194, 78, 23, 61, 18, 18, 15, 189, 80, 97, 78, 191, 64, 216, 184, 189, 195, 203, 97, 62, 194, 29, 120, 62, 195, 238, 34, 191, 74, 89, 50, 63, 152, 182, 253, 62, 157, 33, 121, 62, 242, 81, 45, 63, 145, 226, 72, 62, 102, 99, 1, 191, 34, 150, 62, 62, 26, 191, 45, 190, 150, 53, 237, 189, 143, 4, 213, 62, 254, 81, 83, 189, 208, 117, 109, 62, 226, 88, 60, 62, 119, 201, 112, 62, 238, 171, 69, 191, 10, 215, 6, 191, 248, 65, 137, 62, 222, 238, 66, 190, 20, 175, 8, 191};
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
                alignas(float) const unsigned char memory[] = {225, 234, 240, 189, 160, 63, 84, 189, 74, 238, 127, 190, 91, 218, 6, 189, 116, 8, 105, 189, 176, 6, 15, 62, 81, 33, 216, 190, 40, 231, 116, 61, 205, 38, 167, 59, 82, 101, 50, 190, 88, 141, 82, 190, 204, 91, 106, 190, 227, 211, 52, 62, 237, 227, 151, 190, 231, 232, 234, 190, 29, 95, 184, 190, 11, 86, 126, 61, 128, 116, 157, 61, 46, 209, 191, 189, 150, 32, 139, 190, 217, 128, 28, 62, 39, 193, 97, 62, 230, 62, 247, 189, 118, 87, 252, 190, 160, 210, 62, 61, 131, 219, 93, 190, 82, 126, 221, 189, 230, 202, 135, 62, 242, 53, 139, 62, 175, 76, 158, 61, 226, 204, 78, 190, 58, 199, 186, 62, 235, 18, 231, 190, 239, 32, 9, 62, 216, 204, 130, 190, 217, 104, 18, 189, 34, 249, 236, 61, 117, 255, 14, 62, 94, 40, 8, 61, 198, 65, 189, 189, 247, 49, 195, 189, 198, 134, 35, 62, 242, 252, 54, 189, 49, 33, 83, 189, 112, 114, 159, 189, 155, 132, 122, 189, 119, 63, 8, 190, 244, 110, 68, 188, 80, 200, 5, 190, 98, 250, 229, 61, 119, 202, 163, 189, 80, 44, 173, 61, 41, 82, 254, 190, 216, 46, 65, 61, 168, 238, 28, 62, 149, 29, 253, 61, 167, 23, 140, 190, 19, 199, 218, 61, 212, 161, 99, 190, 98, 222, 106, 60, 51, 11, 18, 190, 120, 253, 103, 61, 40, 152, 105, 190, 39, 131, 143, 189, 11, 186, 200, 61, 146, 92, 43, 61, 14, 53, 187, 60, 168, 239, 56, 61, 67, 159, 235, 189, 164, 74, 133, 189, 57, 250, 131, 61, 36, 47, 73, 62, 54, 207, 98, 62, 27, 163, 47, 190, 122, 61, 73, 190, 88, 248, 226, 190, 46, 67, 156, 190, 246, 13, 49, 190, 184, 236, 138, 189, 102, 57, 29, 188, 46, 242, 39, 62, 236, 252, 156, 62, 62, 177, 188, 60, 212, 99, 106, 189, 26, 76, 130, 62, 187, 79, 220, 190, 111, 128, 37, 188, 102, 137, 36, 62, 8, 206, 211, 60, 191, 222, 211, 188, 214, 23, 53, 190, 202, 144, 180, 190, 202, 169, 28, 61, 222, 97, 128, 189, 34, 75, 230, 62, 94, 131, 207, 190, 251, 169, 171, 187, 154, 161, 187, 189, 249, 72, 42, 61, 191, 124, 126, 189, 251, 5, 47, 190, 231, 135, 89, 189, 27, 241, 144, 189, 222, 161, 104, 62, 230, 7, 222, 60, 195, 38, 219, 61, 41, 138, 182, 60, 194, 221, 31, 190, 162, 233, 161, 189, 200, 77, 155, 188, 26, 57, 7, 62, 154, 238, 163, 190, 151, 249, 216, 190, 117, 168, 199, 61, 85, 205, 217, 61, 94, 170, 137, 61, 244, 246, 32, 190, 151, 117, 16, 61, 2, 146, 22, 190, 17, 25, 165, 190, 9, 231, 131, 190, 13, 119, 15, 190, 131, 101, 135, 190, 95, 235, 30, 62, 173, 250, 160, 62, 40, 102, 95, 62, 77, 217, 144, 187, 189, 218, 165, 61, 20, 144, 251, 188, 218, 240, 49, 189, 113, 176, 79, 61, 43, 105, 247, 189, 56, 84, 234, 185, 218, 157, 104, 62, 21, 123, 42, 62, 85, 248, 126, 60, 45, 206, 110, 189, 70, 55, 157, 60, 235, 243, 11, 62, 143, 132, 131, 61, 91, 195, 43, 190, 102, 118, 34, 62, 196, 155, 33, 189, 137, 74, 173, 189, 138, 252, 2, 62, 150, 89, 140, 61, 117, 1, 226, 189, 162, 115, 167, 61, 63, 157, 162, 189, 15, 91, 2, 62, 71, 122, 66, 62, 136, 79, 76, 62, 200, 95, 210, 60, 83, 123, 122, 60, 240, 210, 136, 60, 123, 26, 122, 190, 94, 249, 236, 190, 102, 180, 3, 189, 91, 53, 176, 61, 168, 22, 91, 60, 121, 87, 13, 62, 143, 15, 21, 189, 161, 184, 8, 62, 87, 40, 97, 60, 59, 174, 199, 61, 188, 165, 233, 189, 81, 200, 193, 61, 219, 194, 48, 190, 16, 242, 128, 61, 68, 207, 15, 60, 173, 145, 198, 189, 57, 43, 57, 189, 238, 177, 15, 62, 93, 196, 189, 189, 98, 190, 216, 61, 14, 26, 145, 188, 237, 159, 39, 190, 248, 226, 16, 190, 47, 105, 213, 189, 32, 100, 86, 189, 128, 199, 148, 189, 173, 138, 214, 61, 3, 15, 209, 60, 128, 50, 67, 61, 223, 180, 22, 62, 128, 157, 217, 188, 22, 140, 184, 189, 214, 190, 201, 189, 176, 21, 37, 62, 106, 220, 170, 189, 48, 106, 44, 60, 139, 187, 14, 190, 74, 17, 129, 189, 204, 99, 92, 190, 189, 108, 112, 62, 217, 223, 8, 190, 106, 121, 8, 189, 149, 52, 92, 61, 45, 81, 249, 61, 165, 208, 147, 62, 108, 8, 176, 61, 65, 38, 148, 190, 95, 133, 220, 188, 15, 117, 160, 190, 182, 198, 156, 190, 91, 91, 252, 188, 205, 47, 12, 62, 30, 221, 142, 189, 0, 55, 224, 62, 129, 221, 160, 62, 202, 106, 181, 187, 248, 241, 18, 62, 29, 122, 86, 62, 137, 184, 146, 190, 221, 155, 223, 61, 220, 218, 33, 190, 143, 192, 104, 62, 213, 214, 125, 60, 127, 61, 204, 187, 178, 179, 150, 190, 42, 140, 218, 61, 182, 219, 31, 62, 138, 39, 23, 62, 140, 142, 12, 191, 206, 111, 14, 190, 169, 195, 136, 190, 142, 95, 114, 190, 179, 52, 215, 189, 23, 51, 208, 189, 245, 69, 162, 62, 212, 11, 48, 191, 19, 125, 96, 61, 48, 52, 176, 61, 219, 152, 9, 62, 189, 115, 58, 62, 174, 99, 6, 62, 205, 211, 37, 189, 238, 86, 39, 190, 242, 84, 132, 60, 110, 52, 247, 190, 231, 27, 197, 62, 203, 119, 133, 62, 44, 244, 29, 190, 181, 48, 220, 190, 150, 61, 23, 62, 191, 35, 72, 62, 157, 109, 12, 61, 193, 35, 248, 190, 41, 124, 191, 60, 119, 255, 127, 190, 50, 57, 86, 188, 244, 170, 7, 62, 157, 101, 132, 190, 22, 65, 216, 62, 249, 204, 3, 190, 73, 21, 152, 62, 1, 18, 242, 188, 131, 98, 32, 61, 171, 230, 167, 189, 182, 148, 194, 60, 151, 155, 18, 188, 222, 63, 41, 62, 242, 111, 187, 62, 215, 20, 101, 61, 214, 93, 19, 190, 160, 30, 202, 61, 5, 68, 112, 62, 133, 69, 23, 61, 77, 94, 31, 60, 2, 169, 247, 61, 44, 117, 48, 62, 205, 52, 83, 62, 143, 15, 55, 190, 226, 232, 127, 190, 24, 36, 11, 62, 92, 40, 129, 189, 27, 33, 2, 190, 164, 136, 181, 62, 186, 98, 157, 61, 183, 25, 195, 61, 132, 196, 97, 188, 53, 140, 206, 61, 73, 173, 78, 189, 22, 190, 137, 189, 236, 147, 219, 190, 106, 157, 152, 62, 41, 224, 135, 190, 107, 247, 80, 62, 224, 209, 195, 189, 214, 227, 84, 189, 156, 18, 93, 62, 33, 253, 100, 189, 98, 146, 206, 61, 205, 30, 151, 59, 138, 148, 25, 189, 110, 115, 124, 62, 94, 191, 40, 190, 73, 178, 74, 190, 91, 46, 224, 60, 108, 190, 133, 189, 109, 29, 227, 187, 1, 98, 121, 62, 124, 56, 249, 60, 235, 154, 91, 62, 86, 214, 167, 62, 177, 106, 4, 190, 160, 161, 211, 189, 154, 207, 236, 188, 27, 234, 91, 62, 186, 235, 2, 62, 55, 172, 83, 61, 221, 51, 37, 60, 178, 67, 179, 61, 4, 46, 224, 60, 47, 135, 0, 190, 166, 60, 235, 189, 12, 149, 197, 190, 212, 90, 156, 61, 177, 201, 50, 62, 75, 104, 169, 190, 6, 89, 94, 59, 74, 172, 191, 190, 144, 224, 28, 61, 7, 105, 184, 189, 178, 159, 176, 190, 125, 14, 113, 62, 240, 133, 9, 61, 250, 90, 12, 190, 222, 21, 23, 189, 119, 246, 19, 190, 209, 208, 27, 62, 43, 238, 17, 189, 153, 159, 132, 190, 61, 214, 85, 190, 25, 53, 95, 61, 215, 192, 7, 190, 14, 9, 231, 59, 39, 149, 186, 190, 66, 154, 52, 189, 155, 137, 70, 190, 166, 241, 212, 189, 95, 175, 118, 188, 151, 164, 48, 62, 40, 136, 181, 190, 28, 84, 162, 190, 57, 133, 109, 190, 171, 116, 194, 190, 211, 66, 251, 61, 4, 158, 77, 190, 23, 243, 112, 62, 43, 220, 184, 190, 32, 179, 50, 62, 219, 31, 95, 190, 181, 151, 29, 62, 232, 70, 73, 190, 221, 108, 254, 189, 19, 66, 2, 62, 131, 224, 144, 62, 7, 135, 167, 190, 244, 234, 190, 188, 209, 219, 236, 189, 64, 250, 128, 61, 155, 93, 22, 62, 77, 98, 114, 189, 140, 194, 206, 59, 104, 48, 193, 189, 185, 119, 108, 62, 183, 163, 126, 189, 139, 67, 88, 189, 24, 95, 231, 61, 222, 82, 68, 188, 70, 184, 196, 61, 139, 239, 39, 190, 249, 153, 10, 190, 61, 41, 21, 62, 121, 245, 104, 190, 132, 16, 223, 190, 79, 132, 135, 62, 170, 30, 184, 61, 36, 92, 138, 190, 38, 78, 203, 189, 243, 197, 9, 189, 168, 241, 183, 190, 246, 180, 128, 190, 210, 67, 81, 190, 201, 16, 49, 61, 183, 20, 23, 190, 107, 59, 25, 62, 152, 192, 246, 61, 233, 93, 18, 189, 142, 195, 122, 62, 66, 50, 42, 190, 56, 153, 55, 190, 203, 88, 150, 189, 158, 127, 144, 190, 190, 95, 142, 190, 91, 218, 158, 190, 10, 130, 144, 189, 12, 183, 255, 61, 155, 168, 77, 59, 149, 82, 53, 62, 176, 251, 207, 62, 226, 237, 202, 190, 37, 96, 87, 62, 116, 41, 182, 190, 62, 51, 26, 190, 126, 229, 230, 189, 41, 198, 23, 62, 126, 62, 152, 190, 157, 80, 136, 62, 202, 11, 81, 62, 192, 233, 31, 190, 218, 92, 54, 191, 111, 41, 134, 190, 134, 115, 86, 62, 200, 49, 162, 190, 121, 203, 138, 189, 217, 121, 236, 61, 45, 76, 141, 189, 29, 90, 225, 61, 236, 152, 31, 62, 227, 245, 237, 189, 216, 255, 186, 60, 127, 225, 173, 61, 190, 85, 106, 190, 175, 186, 144, 189, 66, 67, 155, 61, 86, 237, 57, 188, 197, 223, 190, 61, 184, 213, 20, 62, 184, 2, 142, 189, 104, 173, 238, 60, 72, 122, 137, 190, 84, 84, 91, 189, 228, 40, 209, 61, 211, 11, 134, 189, 140, 88, 141, 188, 99, 99, 11, 190, 109, 26, 90, 189, 241, 219, 117, 61, 91, 144, 242, 189, 45, 132, 211, 60, 220, 211, 230, 61, 124, 106, 104, 188, 32, 61, 170, 190, 167, 230, 119, 62, 69, 86, 38, 190, 236, 236, 255, 188, 113, 93, 184, 189, 224, 15, 118, 190, 245, 83, 45, 190, 118, 201, 247, 61, 218, 53, 174, 61, 190, 100, 73, 61, 197, 151, 13, 61, 173, 30, 24, 190, 3, 243, 147, 189, 149, 202, 138, 61, 46, 216, 94, 189, 196, 143, 38, 60, 239, 13, 150, 190, 58, 226, 15, 189, 97, 205, 218, 60, 184, 125, 93, 62, 188, 204, 86, 61, 228, 63, 35, 62, 235, 165, 31, 190, 120, 161, 148, 62, 2, 102, 136, 189, 187, 98, 27, 62, 141, 172, 85, 61, 19, 214, 150, 62, 188, 122, 10, 190, 99, 116, 12, 62, 25, 39, 138, 62, 44, 122, 29, 61, 140, 250, 55, 190, 145, 60, 37, 190, 95, 26, 108, 61, 224, 247, 121, 61, 81, 144, 139, 189, 28, 134, 243, 189, 154, 3, 111, 191, 43, 87, 122, 61, 114, 51, 81, 190, 99, 32, 69, 189, 215, 31, 138, 62, 97, 74, 75, 191, 176, 59, 93, 61, 134, 213, 16, 191, 138, 69, 135, 60, 223, 253, 28, 62, 242, 18, 149, 188, 0, 238, 131, 61, 18, 216, 80, 190, 97, 102, 223, 61, 40, 160, 144, 62, 178, 158, 218, 60, 139, 106, 33, 62, 54, 227, 163, 62, 36, 156, 32, 62, 253, 31, 67, 189, 245, 133, 136, 190, 125, 47, 29, 62, 255, 169, 157, 61, 194, 219, 12, 62, 92, 84, 19, 62, 237, 30, 181, 61, 78, 208, 18, 190, 127, 195, 127, 61, 109, 166, 236, 60, 103, 187, 129, 188, 197, 230, 139, 191, 37, 239, 109, 190, 156, 193, 51, 190, 54, 131, 80, 190, 28, 104, 130, 62, 206, 226, 121, 62, 84, 22, 119, 62, 94, 38, 154, 190, 10, 35, 12, 188, 98, 42, 180, 62, 158, 121, 20, 189, 135, 159, 90, 189, 199, 229, 20, 190, 3, 33, 21, 62, 209, 168, 237, 61, 205, 31, 81, 61, 171, 247, 238, 190, 67, 150, 119, 189, 131, 71, 217, 190, 7, 148, 7, 62, 173, 194, 94, 191, 160, 230, 22, 62, 154, 23, 212, 61, 215, 19, 229, 61, 152, 105, 144, 190, 171, 54, 244, 62, 32, 15, 245, 61, 37, 13, 241, 58, 89, 193, 170, 190, 34, 186, 125, 62, 140, 4, 251, 189, 237, 180, 153, 62, 158, 154, 89, 62, 65, 12, 25, 61, 77, 235, 13, 189, 169, 36, 131, 62, 79, 208, 188, 190, 167, 250, 34, 189, 93, 228, 61, 62, 231, 19, 152, 190, 143, 67, 200, 189, 249, 96, 111, 191, 149, 131, 145, 190, 79, 180, 133, 61, 165, 61, 59, 62, 233, 22, 45, 188, 252, 117, 165, 62, 169, 43, 106, 62, 194, 185, 213, 61, 119, 9, 133, 188, 144, 206, 35, 62, 173, 172, 181, 62, 25, 115, 65, 189, 245, 24, 141, 189, 133, 192, 226, 190, 24, 236, 132, 61, 173, 239, 97, 62, 214, 216, 23, 189, 109, 0, 169, 62, 191, 58, 66, 61, 34, 181, 93, 190, 133, 136, 155, 190, 168, 178, 55, 62, 20, 3, 207, 188, 236, 86, 100, 62, 42, 204, 92, 59, 47, 255, 87, 62, 206, 128, 64, 61, 128, 91, 22, 62, 159, 161, 139, 62, 163, 239, 56, 62, 30, 10, 65, 189, 188, 43, 61, 190, 250, 111, 198, 189, 85, 148, 198, 189, 58, 57, 82, 62, 151, 114, 33, 190, 35, 186, 51, 62, 139, 220, 102, 62, 252, 28, 209, 61, 5, 53, 103, 62, 40, 171, 1, 190, 117, 107, 194, 61, 160, 69, 69, 61, 198, 220, 98, 61, 74, 104, 61, 189, 252, 86, 64, 62, 120, 148, 7, 61, 181, 15, 59, 62, 93, 123, 74, 190, 153, 229, 55, 60, 56, 8, 179, 190, 59, 166, 118, 190, 239, 49, 83, 61, 221, 200, 120, 61, 240, 248, 129, 190, 165, 55, 23, 190, 104, 10, 168, 58, 2, 192, 41, 62, 175, 73, 8, 62, 84, 198, 185, 61, 69, 184, 42, 61, 99, 81, 0, 190, 137, 101, 35, 61, 5, 100, 240, 59, 38, 74, 178, 189, 202, 124, 136, 189, 241, 46, 8, 190, 16, 152, 123, 189, 49, 58, 215, 186, 196, 190, 224, 186, 185, 209, 62, 189, 255, 139, 200, 62, 103, 67, 217, 61, 171, 196, 227, 59, 173, 116, 241, 61, 66, 253, 16, 61, 118, 44, 78, 62, 85, 222, 142, 61, 45, 248, 181, 189, 40, 130, 8, 62, 23, 145, 136, 61, 85, 155, 8, 190, 179, 182, 61, 190, 212, 101, 179, 190, 77, 138, 252, 61, 51, 107, 191, 60, 133, 139, 185, 189, 174, 118, 42, 191, 157, 220, 26, 190, 106, 11, 136, 190, 78, 220, 1, 190, 247, 36, 120, 62, 59, 83, 154, 61, 184, 219, 28, 190, 203, 93, 188, 190, 193, 233, 152, 189, 208, 59, 166, 62, 244, 7, 170, 189, 12, 103, 60, 190, 28, 85, 30, 190, 66, 223, 13, 190, 214, 87, 192, 189, 56, 38, 70, 188, 109, 32, 192, 190, 56, 100, 141, 61, 202, 196, 86, 190, 73, 1, 111, 189, 216, 90, 224, 190, 86, 158, 32, 61, 188, 179, 102, 62, 203, 101, 93, 62, 209, 196, 203, 190, 234, 79, 13, 189, 189, 190, 36, 62, 225, 35, 217, 62, 206, 49, 92, 190, 8, 105, 225, 62, 196, 251, 130, 190, 5, 24, 191, 62, 185, 108, 17, 188, 21, 193, 1, 190, 248, 47, 185, 60, 106, 246, 108, 191, 146, 130, 242, 189, 99, 217, 246, 187, 122, 196, 186, 60, 114, 52, 122, 189, 248, 165, 140, 189, 125, 167, 8, 190, 218, 33, 2, 191, 145, 23, 20, 62, 157, 54, 130, 189, 191, 89, 107, 62, 194, 145, 50, 191, 126, 12, 14, 62, 36, 164, 173, 61, 62, 45, 56, 62, 238, 21, 96, 189, 48, 127, 6, 191, 130, 230, 15, 62, 15, 236, 245, 60, 178, 197, 176, 190, 246, 166, 149, 62, 132, 216, 70, 62, 159, 150, 87, 61, 192, 140, 14, 189, 126, 34, 2, 60, 92, 101, 44, 61, 143, 152, 74, 190, 222, 74, 73, 62, 60, 249, 55, 190, 107, 217, 21, 190, 41, 234, 151, 62, 19, 219, 164, 61, 242, 233, 120, 61, 216, 8, 36, 62, 114, 92, 141, 62, 150, 253, 199, 189, 66, 187, 56, 190, 14, 166, 192, 188, 175, 57, 164, 61, 2, 154, 100, 189, 90, 36, 121, 189, 105, 147, 71, 62, 100, 28, 120, 56, 91, 113, 174, 61, 214, 87, 141, 190, 32, 166, 180, 189, 235, 248, 248, 60, 32, 36, 58, 62, 82, 14, 189, 189, 41, 28, 107, 190, 254, 61, 45, 62, 211, 204, 222, 60, 24, 86, 15, 189, 189, 85, 56, 190, 152, 46, 179, 61, 38, 71, 31, 190, 180, 63, 148, 62, 190, 151, 89, 189, 250, 164, 59, 62, 211, 27, 242, 59, 253, 7, 145, 62, 248, 238, 210, 60, 105, 109, 131, 190, 222, 245, 188, 190, 129, 27, 143, 191, 231, 143, 235, 61, 94, 13, 222, 61, 86, 51, 153, 62, 124, 151, 238, 189, 127, 108, 148, 60, 209, 20, 11, 62, 121, 202, 179, 190, 182, 248, 188, 62, 250, 11, 220, 189, 103, 170, 44, 62, 250, 147, 89, 191, 92, 57, 39, 62, 175, 217, 149, 190, 187, 219, 5, 60, 190, 239, 235, 189, 20, 140, 4, 191, 88, 179, 238, 61, 238, 24, 167, 189, 208, 62, 105, 190, 102, 20, 205, 62, 204, 106, 141, 61, 215, 104, 243, 190, 100, 99, 149, 61, 113, 88, 54, 190, 252, 177, 247, 189, 111, 139, 213, 190, 52, 236, 52, 61, 46, 71, 47, 189, 81, 124, 74, 191, 26, 48, 46, 190, 50, 52, 175, 189, 228, 187, 154, 190, 196, 255, 17, 62, 53, 178, 158, 61, 254, 195, 139, 187, 222, 68, 132, 190, 187, 243, 144, 190, 163, 107, 115, 62, 119, 53, 185, 189, 15, 206, 11, 190, 53, 123, 127, 61, 111, 108, 176, 60, 246, 234, 19, 62, 152, 44, 237, 61, 253, 156, 76, 190, 130, 19, 234, 187, 52, 14, 108, 190, 79, 206, 223, 61, 65, 128, 58, 191, 30, 78, 186, 60, 243, 224, 58, 62, 54, 123, 16, 61, 143, 229, 30, 191, 14, 101, 151, 189, 248, 247, 69, 189, 94, 108, 92, 62, 58, 100, 137, 190, 51, 82, 146, 62, 113, 175, 223, 188, 90, 118, 218, 61, 81, 112, 1, 62, 32, 23, 52, 190, 110, 119, 93, 62, 133, 0, 39, 191, 140, 38, 82, 59, 118, 190, 132, 61, 220, 203, 12, 61, 245, 65, 25, 60, 189, 225, 147, 189, 90, 178, 180, 61, 19, 31, 96, 190, 102, 204, 38, 62, 20, 160, 243, 61, 102, 6, 145, 189, 89, 147, 239, 189, 31, 189, 9, 61, 227, 176, 250, 62, 20, 205, 239, 188, 104, 117, 2, 190, 127, 101, 166, 190, 250, 28, 29, 62, 17, 121, 2, 190, 183, 61, 59, 190, 223, 226, 225, 189, 95, 200, 190, 62, 238, 54, 132, 60, 77, 13, 113, 190, 188, 203, 140, 190, 72, 153, 188, 190, 198, 193, 148, 189, 26, 15, 43, 62, 37, 95, 229, 188, 233, 70, 60, 190, 219, 69, 101, 62, 85, 106, 57, 190, 184, 75, 119, 61, 167, 8, 135, 61, 180, 40, 75, 62, 160, 95, 66, 190, 118, 238, 178, 190, 93, 100, 67, 190, 77, 94, 87, 62, 149, 124, 229, 61, 122, 42, 253, 187, 96, 182, 165, 62, 98, 28, 8, 186, 107, 19, 201, 189, 134, 153, 59, 190, 68, 28, 133, 189, 142, 217, 202, 60, 111, 111, 71, 62, 247, 139, 250, 60, 77, 129, 52, 190, 180, 150, 171, 61, 48, 128, 94, 62, 10, 182, 126, 189, 215, 39, 179, 189, 216, 235, 146, 61, 131, 38, 191, 189, 122, 138, 166, 62, 234, 164, 164, 190, 233, 232, 59, 189, 251, 218, 147, 189, 204, 198, 113, 62, 70, 177, 92, 191, 123, 208, 163, 190, 132, 119, 166, 189, 215, 221, 91, 189, 142, 53, 6, 61, 40, 216, 72, 61, 153, 212, 57, 190, 238, 1, 52, 190, 137, 96, 176, 60, 245, 111, 108, 189, 109, 214, 199, 61, 246, 116, 140, 189, 177, 242, 41, 190, 154, 138, 100, 189, 136, 122, 93, 62, 221, 174, 111, 189, 103, 70, 125, 190, 80, 90, 47, 62, 147, 54, 149, 188, 97, 10, 10, 189, 57, 29, 27, 191, 226, 30, 225, 189, 46, 98, 73, 62, 214, 237, 242, 61, 5, 68, 13, 191, 82, 234, 242, 190, 227, 89, 188, 61, 204, 162, 187, 61, 177, 120, 87, 189, 219, 179, 164, 62, 254, 6, 149, 190, 25, 202, 167, 60, 49, 79, 176, 61, 71, 2, 59, 190, 185, 253, 5, 190, 136, 21, 216, 189, 188, 226, 213, 61, 222, 47, 153, 60, 178, 221, 212, 189, 227, 26, 140, 60, 134, 90, 187, 59, 171, 115, 153, 189, 183, 85, 50, 190, 20, 216, 129, 60, 84, 52, 48, 190, 191, 168, 58, 190, 26, 8, 41, 188, 252, 80, 132, 59, 141, 157, 17, 61, 249, 5, 26, 190, 68, 124, 67, 186, 36, 171, 167, 60, 240, 92, 214, 189, 16, 91, 13, 62, 6, 222, 50, 188, 213, 28, 1, 62, 248, 225, 43, 188, 184, 176, 180, 61, 46, 120, 112, 189, 192, 100, 20, 190, 81, 48, 225, 188, 213, 124, 176, 61, 29, 15, 74, 189, 238, 209, 15, 190, 190, 199, 39, 188, 230, 237, 25, 62, 220, 185, 26, 189, 132, 128, 89, 61, 22, 132, 63, 190, 31, 101, 186, 62, 234, 172, 198, 189, 34, 110, 202, 60, 72, 41, 240, 189, 20, 158, 5, 57, 126, 138, 102, 189, 7, 72, 79, 190, 62, 34, 119, 62, 55, 135, 228, 60, 250, 53, 71, 61, 48, 105, 149, 190, 197, 70, 55, 62, 21, 224, 113, 60, 136, 174, 212, 189, 77, 70, 110, 61, 162, 119, 63, 190, 66, 29, 175, 188, 183, 72, 141, 62, 177, 122, 134, 190, 87, 73, 23, 189, 148, 151, 152, 62, 224, 209, 91, 189, 220, 7, 147, 189, 152, 228, 178, 190, 107, 231, 162, 62, 156, 110, 85, 190, 24, 142, 237, 61, 72, 71, 131, 190, 78, 86, 142, 188, 52, 50, 234, 59, 38, 218, 30, 190, 190, 15, 182, 189, 220, 242, 22, 189, 197, 252, 34, 191, 71, 130, 98, 62, 30, 71, 61, 62, 219, 24, 149, 190, 61, 239, 19, 189, 91, 214, 128, 190, 75, 20, 24, 190, 128, 33, 142, 190, 230, 97, 55, 62, 180, 44, 195, 190, 50, 11, 29, 62, 100, 1, 174, 62, 245, 168, 105, 190, 49, 54, 56, 62, 87, 148, 35, 190, 161, 124, 250, 189, 28, 89, 210, 60, 30, 179, 205, 190, 31, 58, 15, 190, 165, 111, 80, 62, 190, 253, 89, 190, 146, 55, 180, 190, 72, 32, 159, 62, 12, 164, 157, 189, 20, 239, 134, 60, 241, 233, 118, 189, 85, 154, 129, 59, 115, 153, 213, 59, 181, 161, 138, 189, 127, 185, 147, 61, 59, 136, 20, 189, 61, 225, 4, 189, 6, 161, 143, 189, 185, 235, 198, 189, 208, 38, 16, 190, 244, 244, 82, 189, 182, 52, 20, 62, 48, 161, 175, 189, 196, 116, 205, 60, 130, 46, 156, 61, 14, 84, 79, 189, 199, 133, 101, 189, 250, 119, 17, 190, 147, 69, 83, 61, 88, 160, 213, 58, 241, 84, 17, 62, 12, 126, 60, 61, 48, 195, 14, 190, 246, 123, 67, 190, 177, 137, 2, 189, 108, 192, 28, 189, 83, 234, 174, 189, 203, 71, 47, 189, 77, 239, 170, 58, 195, 124, 152, 187, 97, 236, 63, 60, 50, 98, 45, 190, 78, 27, 191, 58};
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
                alignas(float) const unsigned char memory[] = {164, 107, 114, 189, 48, 83, 61, 62, 48, 59, 156, 190, 247, 100, 247, 60, 189, 111, 133, 62, 224, 145, 52, 190, 114, 127, 148, 189, 100, 28, 247, 60, 239, 208, 169, 62, 223, 219, 72, 62, 116, 0, 9, 190, 66, 69, 18, 62, 97, 24, 87, 62, 215, 90, 44, 62, 188, 107, 168, 187, 216, 212, 83, 189, 74, 210, 29, 189, 173, 167, 127, 189, 227, 50, 37, 188, 68, 209, 129, 62, 242, 137, 84, 61, 55, 241, 18, 60, 43, 121, 40, 189, 42, 245, 54, 62, 71, 126, 244, 59, 239, 184, 84, 62, 95, 127, 206, 188, 182, 232, 12, 62, 62, 237, 140, 189, 34, 225, 91, 62, 163, 161, 189, 189, 251, 48, 158, 189};
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
                alignas(float) const unsigned char memory[] = {48, 23, 229, 190, 4, 131, 56, 190, 114, 227, 228, 62, 5, 177, 166, 62, 211, 168, 238, 60, 160, 211, 208, 61, 94, 9, 213, 62, 61, 22, 241, 190, 76, 41, 110, 189, 7, 206, 185, 61, 104, 231, 149, 190, 202, 214, 9, 190, 21, 162, 20, 191, 60, 104, 224, 59, 137, 149, 6, 190, 177, 237, 74, 190, 254, 64, 12, 191, 164, 93, 39, 190, 120, 68, 228, 61, 104, 71, 180, 60, 97, 182, 174, 190, 126, 99, 162, 62, 171, 156, 2, 190, 240, 141, 102, 63, 93, 71, 220, 190, 95, 125, 151, 62, 118, 2, 175, 190, 240, 142, 241, 189, 229, 201, 8, 62, 205, 184, 194, 189, 144, 130, 143, 190, 10, 60, 49, 189, 17, 142, 251, 62, 127, 83, 79, 61, 120, 80, 173, 62, 215, 37, 109, 62, 242, 13, 140, 190, 143, 193, 210, 61, 212, 239, 91, 61, 0, 206, 12, 190, 142, 146, 221, 190, 250, 76, 150, 190, 3, 223, 93, 190, 188, 246, 208, 189, 75, 7, 69, 61, 35, 167, 215, 189, 105, 239, 55, 189, 213, 0, 201, 189, 117, 9, 52, 62, 40, 233, 130, 61, 56, 34, 146, 190, 34, 19, 104, 190, 71, 79, 233, 62, 71, 15, 86, 62, 63, 65, 196, 61, 73, 83, 24, 61, 208, 69, 199, 61, 209, 128, 117, 60, 35, 214, 86, 62, 165, 85, 52, 189, 97, 136, 92, 189, 72, 220, 172, 190, 224, 153, 0, 63, 212, 74, 192, 60};
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
                alignas(float) const unsigned char memory[] = {218, 163, 210, 61, 9, 116, 90, 189};
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
    alignas(float) const unsigned char memory[] = {87, 198, 167, 189, 142, 201, 234, 63, 176, 215, 105, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {236, 39, 7, 192, 121, 115, 186, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0003/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}