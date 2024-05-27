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
                alignas(float) const unsigned char memory[] = {192, 88, 49, 63, 31, 78, 125, 62, 147, 18, 147, 62, 209, 119, 221, 62, 72, 116, 53, 191, 146, 49, 11, 190, 106, 26, 152, 190, 70, 9, 149, 191, 162, 113, 77, 190, 153, 176, 19, 190, 193, 80, 255, 190, 72, 233, 1, 63, 26, 206, 49, 191, 145, 7, 3, 63, 153, 40, 89, 62, 252, 85, 176, 62, 58, 19, 28, 191, 134, 189, 219, 190, 35, 158, 38, 61, 173, 98, 88, 63, 91, 230, 0, 191, 79, 209, 18, 191, 34, 86, 139, 62, 197, 1, 33, 62, 212, 111, 2, 191, 62, 100, 91, 63, 17, 214, 28, 191, 138, 182, 19, 63, 131, 74, 105, 63, 253, 252, 175, 62, 65, 53, 172, 189, 192, 16, 116, 191, 177, 221, 62, 190, 50, 1, 105, 190, 117, 197, 232, 191, 71, 23, 179, 190, 22, 214, 207, 62, 97, 16, 127, 63, 139, 69, 191, 61, 187, 79, 70, 63, 161, 84, 99, 190, 187, 39, 54, 191, 183, 1, 3, 63, 192, 19, 143, 191, 187, 201, 151, 61, 97, 115, 4, 63, 188, 66, 26, 191, 183, 95, 152, 62, 60, 62, 231, 190, 176, 159, 214, 63, 117, 235, 202, 62, 72, 25, 70, 191, 49, 190, 5, 191, 116, 159, 214, 60, 161, 128, 210, 190, 165, 241, 153, 63, 71, 0, 117, 62, 221, 150, 79, 190, 200, 219, 210, 190, 11, 160, 44, 191, 220, 28, 130, 189, 198, 178, 95, 63, 123, 48, 31, 190, 26, 124, 153, 190, 52, 158, 119, 191, 83, 227, 27, 191, 90, 215, 9, 191, 118, 210, 142, 191, 216, 147, 120, 190, 164, 98, 48, 191, 104, 208, 9, 62, 200, 173, 213, 189, 42, 73, 182, 190, 105, 44, 162, 63, 88, 238, 131, 62, 145, 169, 67, 191, 17, 147, 143, 61, 175, 33, 249, 62, 47, 249, 40, 63, 69, 214, 120, 62, 108, 58, 42, 62, 204, 241, 157, 62, 149, 128, 154, 191, 122, 94, 112, 190, 214, 188, 217, 190, 247, 73, 83, 59, 194, 155, 243, 190, 110, 81, 24, 191, 197, 23, 5, 63, 175, 146, 63, 62, 91, 83, 240, 62, 176, 36, 246, 190, 56, 24, 214, 62, 132, 14, 140, 62, 65, 212, 17, 191, 226, 8, 255, 190};
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
                alignas(float) const unsigned char memory[] = {47, 92, 60, 191, 237, 6, 145, 62, 203, 176, 180, 190, 189, 158, 125, 62, 155, 159, 96, 63, 111, 48, 164, 62, 28, 250, 109, 190, 206, 27, 190, 61, 49, 180, 227, 190, 187, 108, 27, 191, 187, 29, 146, 62, 174, 83, 187, 190, 42, 168, 206, 62, 33, 120, 136, 190, 2, 214, 101, 62, 154, 109, 214, 62, 17, 47, 74, 61, 239, 216, 188, 62, 76, 135, 50, 63, 173, 8, 211, 190, 240, 118, 220, 189, 122, 94, 129, 190, 80, 185, 240, 62, 181, 221, 39, 191, 210, 212, 252, 188, 40, 48, 32, 190, 85, 252, 16, 190, 216, 0, 1, 63, 181, 198, 187, 62, 94, 116, 60, 63, 133, 146, 15, 63, 32, 233, 193, 190};
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
                alignas(float) const unsigned char memory[] = {17, 40, 9, 60, 45, 77, 226, 61, 216, 140, 18, 191, 101, 163, 196, 189, 253, 20, 177, 190, 85, 189, 187, 61, 154, 174, 172, 187, 192, 26, 202, 189, 199, 206, 222, 189, 239, 114, 141, 62, 154, 4, 239, 188, 168, 198, 191, 189, 212, 185, 11, 191, 218, 23, 134, 62, 169, 63, 52, 62, 228, 101, 186, 62, 184, 47, 73, 62, 189, 64, 27, 191, 150, 201, 64, 191, 59, 51, 134, 61, 233, 73, 10, 190, 120, 193, 238, 61, 29, 241, 2, 190, 192, 16, 245, 189, 15, 27, 17, 191, 16, 100, 152, 61, 18, 232, 132, 190, 241, 70, 35, 62, 207, 175, 71, 190, 85, 70, 164, 190, 31, 199, 130, 62, 132, 253, 34, 62, 71, 121, 23, 62, 211, 94, 187, 62, 167, 78, 162, 188, 251, 105, 34, 62, 220, 27, 58, 189, 46, 15, 132, 189, 202, 7, 28, 191, 38, 253, 10, 62, 123, 124, 22, 191, 98, 200, 22, 190, 101, 158, 112, 62, 121, 56, 236, 62, 120, 109, 140, 190, 93, 76, 60, 62, 245, 234, 176, 62, 39, 80, 159, 62, 112, 132, 170, 60, 179, 215, 185, 61, 235, 126, 181, 189, 127, 40, 242, 189, 105, 85, 59, 190, 152, 223, 12, 190, 132, 107, 59, 190, 42, 118, 31, 191, 165, 60, 109, 190, 208, 97, 26, 190, 169, 8, 7, 63, 27, 61, 89, 189, 122, 243, 36, 190, 139, 134, 84, 189, 77, 248, 72, 62, 155, 120, 207, 61, 210, 49, 160, 61, 109, 129, 211, 61, 120, 7, 117, 191, 141, 177, 123, 62, 174, 238, 57, 189, 229, 123, 25, 62, 188, 253, 190, 188, 112, 224, 182, 61, 231, 63, 198, 190, 237, 187, 35, 60, 80, 82, 20, 62, 213, 80, 36, 191, 184, 193, 144, 190, 116, 240, 29, 63, 186, 139, 125, 62, 163, 137, 20, 62, 132, 135, 71, 62, 149, 7, 6, 62, 154, 207, 75, 190, 184, 157, 20, 190, 16, 186, 54, 188, 91, 44, 141, 190, 94, 205, 21, 62, 60, 121, 146, 62, 111, 71, 161, 62, 129, 85, 3, 190, 99, 181, 14, 190, 196, 143, 133, 62, 161, 117, 30, 62, 231, 154, 28, 189, 67, 138, 116, 190, 125, 159, 11, 63, 173, 38, 22, 62, 193, 30, 234, 189, 136, 139, 129, 189, 19, 40, 22, 60, 209, 171, 87, 62, 218, 137, 123, 61, 68, 237, 30, 61, 82, 130, 18, 62, 138, 194, 41, 61, 131, 154, 37, 190, 178, 173, 121, 191, 225, 217, 126, 190, 211, 37, 204, 62, 23, 157, 69, 62, 214, 81, 91, 188, 14, 80, 100, 62, 6, 91, 181, 61, 244, 196, 55, 189, 47, 93, 226, 62, 57, 3, 206, 60, 72, 52, 165, 61, 51, 97, 142, 189, 76, 112, 154, 191, 141, 27, 208, 190, 148, 16, 4, 190, 9, 255, 17, 190, 109, 133, 56, 62, 125, 249, 87, 190, 144, 37, 17, 189, 112, 160, 21, 62, 61, 241, 150, 62, 7, 2, 25, 62, 127, 147, 23, 60, 17, 85, 29, 190, 164, 128, 170, 59, 228, 14, 193, 61, 169, 131, 55, 190, 167, 96, 220, 189, 182, 226, 229, 189, 42, 111, 15, 189, 172, 220, 158, 61, 88, 242, 234, 61, 233, 247, 143, 61, 53, 241, 190, 61, 7, 64, 79, 188, 0, 160, 190, 61, 3, 149, 9, 190, 34, 144, 133, 189, 175, 141, 45, 61, 54, 61, 19, 190, 150, 200, 30, 190, 125, 213, 102, 189, 12, 46, 125, 188, 229, 40, 182, 189, 217, 117, 180, 189, 235, 80, 3, 187, 208, 78, 247, 189, 133, 56, 184, 61, 7, 125, 9, 190, 70, 101, 255, 61, 173, 75, 25, 61, 72, 179, 22, 60, 61, 87, 135, 61, 119, 191, 216, 187, 153, 140, 179, 190, 245, 31, 19, 61, 206, 20, 16, 62, 189, 148, 22, 191, 27, 22, 163, 62, 123, 197, 161, 188, 175, 188, 242, 61, 84, 134, 151, 189, 227, 129, 65, 62, 11, 206, 136, 191, 173, 215, 116, 188, 172, 71, 71, 62, 243, 148, 173, 62, 51, 121, 215, 190, 153, 197, 51, 191, 57, 51, 253, 190, 88, 224, 204, 190, 92, 77, 191, 62, 180, 242, 119, 62, 95, 172, 48, 61, 194, 97, 136, 186, 244, 27, 15, 61, 151, 156, 68, 189, 1, 65, 59, 62, 220, 203, 178, 190, 253, 118, 146, 61, 248, 244, 76, 61, 197, 77, 110, 62, 10, 222, 141, 62, 226, 38, 147, 62, 231, 224, 135, 60, 182, 60, 236, 190, 117, 196, 95, 61, 198, 144, 195, 61, 15, 182, 247, 61, 170, 80, 70, 191, 14, 121, 52, 62, 246, 194, 118, 62, 204, 207, 38, 190, 186, 237, 79, 190, 189, 106, 5, 62, 132, 131, 185, 189, 225, 80, 170, 61, 87, 191, 98, 62, 224, 16, 77, 62, 202, 12, 193, 189, 63, 252, 72, 191, 3, 183, 146, 190, 145, 169, 231, 191, 117, 169, 130, 62, 59, 33, 243, 61, 221, 58, 58, 62, 84, 253, 53, 62, 103, 75, 86, 62, 41, 28, 90, 62, 57, 128, 213, 189, 53, 234, 180, 191, 16, 207, 240, 62, 105, 194, 17, 191, 223, 143, 36, 62, 110, 43, 182, 61, 41, 168, 113, 62, 84, 98, 113, 61, 225, 25, 162, 190, 212, 191, 122, 190, 109, 130, 240, 61, 75, 107, 155, 191, 210, 255, 158, 61, 101, 56, 215, 61, 180, 218, 132, 190, 167, 222, 130, 191, 77, 4, 10, 62, 185, 205, 242, 190, 102, 152, 240, 190, 93, 68, 216, 62, 146, 153, 109, 191, 81, 169, 57, 190, 61, 113, 242, 61, 238, 126, 34, 62, 174, 161, 34, 189, 222, 113, 160, 60, 80, 158, 54, 62, 148, 190, 181, 189, 237, 95, 111, 190, 26, 3, 11, 191, 40, 5, 68, 191, 191, 147, 32, 61, 238, 242, 252, 62, 236, 184, 141, 61, 206, 63, 87, 190, 153, 103, 112, 191, 203, 86, 62, 62, 212, 113, 225, 190, 5, 21, 154, 62, 50, 141, 37, 59, 78, 55, 147, 188, 129, 177, 158, 189, 100, 17, 37, 190, 226, 190, 148, 189, 96, 170, 212, 61, 234, 149, 142, 189, 241, 170, 97, 61, 173, 179, 205, 189, 123, 99, 212, 185, 108, 116, 22, 62, 48, 14, 174, 189, 233, 241, 164, 188, 66, 46, 255, 189, 41, 74, 98, 190, 73, 55, 22, 190, 238, 178, 17, 62, 81, 45, 212, 188, 160, 19, 172, 189, 245, 48, 137, 189, 222, 54, 50, 189, 44, 203, 125, 189, 58, 99, 121, 189, 144, 37, 183, 188, 6, 201, 127, 189, 200, 145, 39, 190, 66, 178, 218, 61, 63, 118, 24, 190, 149, 231, 127, 61, 181, 52, 41, 190, 159, 244, 86, 188, 234, 206, 42, 60, 204, 240, 170, 189, 231, 232, 217, 189, 116, 80, 170, 190, 238, 5, 42, 61, 66, 188, 137, 191, 185, 44, 201, 61, 91, 22, 135, 61, 176, 234, 171, 190, 93, 222, 44, 189, 32, 252, 167, 189, 160, 220, 139, 190, 174, 71, 186, 190, 120, 186, 181, 62, 155, 190, 91, 191, 109, 238, 198, 61, 132, 141, 9, 191, 54, 79, 170, 58, 25, 87, 12, 61, 232, 51, 44, 189, 136, 137, 169, 189, 67, 117, 89, 62, 170, 220, 247, 189, 132, 173, 3, 63, 84, 102, 50, 191, 201, 139, 153, 61, 174, 143, 231, 62, 7, 132, 150, 60, 125, 169, 58, 190, 145, 82, 239, 190, 226, 178, 10, 190, 170, 147, 36, 189, 132, 96, 145, 61, 161, 93, 162, 61, 139, 72, 78, 190, 105, 234, 210, 188, 56, 249, 29, 62, 58, 146, 57, 61, 208, 119, 239, 189, 123, 195, 136, 62, 108, 54, 20, 62, 83, 6, 94, 61, 29, 1, 208, 188, 193, 167, 58, 62, 237, 49, 98, 191, 130, 0, 254, 190, 97, 44, 223, 61, 124, 159, 187, 62, 187, 27, 198, 190, 166, 92, 152, 189, 241, 101, 4, 61, 147, 99, 231, 190, 136, 240, 110, 62, 12, 90, 115, 62, 221, 69, 245, 188, 159, 156, 182, 62, 237, 11, 59, 187, 4, 104, 230, 189, 52, 235, 41, 189, 211, 237, 31, 191, 76, 194, 139, 190, 209, 183, 114, 189, 159, 49, 143, 190, 13, 127, 105, 62, 204, 118, 109, 62, 46, 18, 113, 61, 179, 40, 200, 190, 196, 36, 179, 189, 209, 34, 181, 190, 104, 190, 4, 63, 141, 112, 64, 190, 149, 140, 195, 62, 229, 96, 73, 189, 240, 114, 148, 189, 92, 155, 19, 191, 53, 191, 178, 59, 228, 169, 116, 62, 122, 143, 231, 62, 14, 189, 166, 61, 136, 160, 101, 62, 215, 110, 84, 191, 254, 70, 2, 62, 121, 68, 174, 189, 228, 176, 68, 190, 199, 177, 146, 62, 252, 205, 70, 62, 252, 223, 128, 61, 23, 193, 203, 62, 70, 124, 242, 61, 137, 225, 188, 62, 241, 250, 239, 187, 138, 238, 100, 62, 98, 185, 144, 191, 182, 19, 62, 60, 192, 181, 184, 187, 215, 24, 82, 62, 116, 157, 59, 62, 54, 37, 139, 190, 39, 240, 4, 191, 219, 247, 46, 190, 34, 234, 19, 190, 84, 178, 0, 190, 236, 86, 29, 190, 50, 44, 0, 62, 202, 180, 235, 61, 187, 219, 126, 189, 60, 218, 81, 190, 204, 115, 38, 189, 176, 238, 150, 187, 253, 161, 21, 62, 139, 122, 65, 190, 251, 49, 138, 189, 87, 25, 44, 61, 244, 104, 253, 61, 98, 113, 196, 189, 162, 152, 164, 188, 224, 125, 14, 190, 7, 141, 166, 61, 6, 162, 237, 189, 186, 254, 29, 190, 166, 20, 60, 61, 240, 7, 195, 61, 122, 109, 21, 188, 115, 248, 138, 60, 250, 59, 42, 62, 208, 159, 26, 190, 139, 106, 148, 61, 173, 88, 226, 189, 250, 171, 70, 190, 33, 234, 150, 60, 133, 64, 231, 189, 100, 137, 164, 189, 54, 61, 105, 189, 41, 133, 210, 60, 155, 184, 6, 190, 203, 225, 135, 189, 183, 242, 103, 188, 11, 104, 158, 59, 67, 123, 141, 189, 34, 231, 152, 187, 108, 63, 130, 61, 55, 188, 187, 61, 12, 141, 3, 190, 200, 16, 217, 187, 31, 221, 12, 61, 14, 81, 107, 189, 27, 8, 96, 188, 22, 51, 194, 187, 253, 90, 195, 61, 30, 54, 48, 190, 14, 27, 217, 189, 151, 196, 6, 190, 56, 193, 2, 190, 42, 187, 164, 188, 97, 101, 236, 60, 170, 247, 156, 189, 113, 231, 40, 190, 197, 85, 204, 188, 76, 237, 190, 61, 116, 113, 201, 189, 10, 70, 130, 61, 88, 54, 75, 189, 59, 0, 32, 190, 243, 202, 197, 190, 252, 181, 140, 62, 253, 39, 12, 191, 126, 111, 74, 61, 55, 114, 73, 62, 101, 251, 252, 189, 111, 169, 201, 190, 58, 115, 95, 61, 82, 126, 241, 190, 216, 40, 31, 191, 134, 111, 17, 63, 219, 220, 158, 190, 53, 127, 180, 60, 214, 213, 255, 62, 242, 242, 134, 61, 111, 232, 125, 62, 10, 124, 214, 60, 233, 14, 150, 62, 77, 26, 140, 61, 142, 75, 130, 191, 4, 129, 60, 191, 183, 21, 69, 191, 48, 85, 171, 62, 229, 254, 147, 62, 36, 6, 164, 61, 107, 26, 42, 189, 154, 132, 90, 191, 82, 73, 196, 62, 140, 100, 244, 190, 127, 29, 234, 189, 242, 36, 141, 190, 23, 87, 189, 190, 208, 201, 88, 62, 40, 65, 107, 189, 183, 149, 194, 61, 216, 50, 61, 61, 89, 235, 170, 189, 25, 218, 211, 188, 229, 247, 133, 62, 236, 41, 7, 190, 97, 104, 199, 61, 82, 6, 66, 62, 72, 51, 153, 190, 244, 131, 93, 62, 71, 228, 127, 62, 114, 173, 74, 61, 3, 253, 188, 189, 229, 231, 35, 188, 86, 81, 45, 62, 125, 27, 186, 190, 167, 180, 255, 189, 188, 79, 215, 188, 12, 200, 109, 62, 152, 207, 66, 188, 122, 91, 231, 190, 91, 73, 69, 61, 198, 8, 13, 62, 181, 154, 188, 60, 132, 108, 191, 61, 25, 214, 226, 189, 200, 41, 66, 62, 27, 116, 98, 61, 108, 98, 40, 62, 71, 196, 79, 61, 109, 203, 196, 61, 176, 211, 29, 190, 108, 120, 164, 61, 193, 139, 242, 189, 113, 223, 60, 190, 30, 232, 16, 61, 121, 220, 84, 190, 10, 220, 38, 62, 238, 176, 7, 190, 48, 108, 160, 61, 191, 176, 210, 61, 223, 135, 163, 61, 73, 9, 7, 190, 219, 201, 155, 188, 199, 216, 160, 184, 232, 157, 146, 189, 16, 53, 24, 190, 117, 2, 245, 189, 88, 225, 27, 190, 104, 148, 27, 61, 3, 12, 167, 61, 98, 150, 214, 60, 124, 170, 180, 189, 54, 37, 226, 189, 132, 112, 172, 61, 245, 191, 2, 62, 212, 169, 194, 188, 239, 245, 118, 61, 133, 63, 92, 61, 49, 158, 3, 60, 106, 125, 234, 61, 59, 194, 81, 190, 149, 51, 11, 189, 123, 144, 129, 190, 61, 143, 39, 191, 244, 3, 180, 61, 215, 85, 58, 62, 28, 191, 143, 190, 175, 14, 170, 190, 244, 4, 51, 61, 38, 136, 27, 191, 55, 137, 149, 62, 13, 15, 19, 189, 170, 45, 41, 191, 90, 53, 176, 62, 153, 43, 194, 189, 20, 74, 36, 190, 96, 221, 11, 62, 244, 181, 66, 62, 94, 24, 0, 190, 26, 179, 80, 62, 81, 99, 156, 190, 78, 16, 11, 190, 143, 107, 203, 190, 191, 35, 193, 61, 50, 58, 163, 62, 11, 160, 144, 62, 107, 253, 4, 189, 101, 202, 61, 190, 227, 221, 9, 191, 205, 111, 195, 190, 83, 121, 48, 61, 171, 171, 35, 190, 112, 232, 207, 189, 72, 251, 64, 190, 234, 144, 159, 190, 168, 161, 138, 191, 70, 19, 12, 190, 131, 66, 142, 62, 205, 76, 178, 190, 239, 76, 239, 61, 254, 0, 124, 61, 125, 174, 223, 61, 104, 98, 165, 190, 249, 74, 181, 189, 222, 206, 132, 191, 35, 30, 1, 63, 235, 39, 78, 60, 148, 249, 255, 190, 145, 155, 203, 189, 87, 87, 26, 62, 196, 203, 5, 188, 210, 104, 139, 62, 167, 17, 245, 189, 30, 102, 72, 62, 77, 140, 184, 190, 188, 114, 81, 62, 182, 44, 90, 62, 240, 74, 121, 62, 140, 34, 13, 190, 148, 94, 40, 191, 29, 74, 66, 191, 197, 177, 136, 190, 146, 236, 160, 62, 127, 55, 4, 189, 129, 183, 12, 62, 104, 160, 113, 61, 165, 153, 119, 61, 7, 189, 116, 62, 197, 159, 92, 190, 78, 99, 44, 62, 184, 16, 166, 61, 50, 5, 229, 61, 7, 195, 231, 189, 12, 236, 79, 62, 188, 115, 118, 189, 157, 138, 230, 188, 230, 182, 226, 61, 205, 228, 148, 62, 134, 90, 188, 190, 131, 212, 226, 189, 3, 10, 31, 60, 13, 24, 132, 189, 54, 119, 120, 62, 22, 31, 143, 62, 152, 132, 87, 62, 251, 25, 144, 189, 103, 212, 107, 189, 242, 79, 146, 188, 102, 74, 154, 61, 65, 101, 203, 189, 53, 223, 28, 61, 186, 86, 37, 62, 69, 144, 197, 60, 89, 86, 80, 189, 25, 121, 150, 61, 175, 142, 134, 62, 75, 169, 220, 190, 4, 62, 50, 191, 1, 235, 4, 62, 104, 153, 153, 191, 112, 41, 226, 188, 192, 217, 217, 61, 161, 126, 141, 190, 149, 150, 38, 191, 17, 13, 204, 60, 213, 76, 8, 191, 57, 225, 80, 191, 153, 186, 181, 62, 85, 205, 57, 191, 244, 198, 195, 190, 250, 88, 94, 190, 196, 34, 225, 62, 73, 85, 51, 62, 228, 206, 28, 61, 163, 210, 243, 61, 80, 128, 176, 61, 34, 151, 200, 190, 142, 242, 70, 191, 3, 26, 132, 191, 246, 26, 199, 62, 118, 249, 119, 62, 56, 248, 165, 62, 228, 115, 128, 189, 128, 67, 130, 191, 172, 177, 189, 62, 230, 216, 242, 190, 166, 85, 187, 61, 164, 164, 38, 190, 225, 87, 165, 190, 246, 10, 31, 62, 31, 116, 28, 62, 166, 227, 168, 61, 198, 218, 94, 62, 186, 42, 36, 190, 183, 83, 7, 190, 53, 160, 135, 61, 126, 76, 13, 62, 94, 211, 42, 62, 194, 60, 200, 188, 14, 111, 24, 191, 247, 212, 251, 61, 244, 190, 4, 62, 252, 112, 220, 62, 31, 176, 20, 62, 125, 213, 28, 189, 18, 10, 199, 188, 240, 233, 241, 190, 28, 209, 160, 189, 242, 71, 85, 186, 169, 161, 213, 187, 219, 95, 3, 61, 138, 194, 46, 191, 154, 254, 59, 191, 197, 148, 30, 61, 42, 144, 21, 62, 237, 65, 174, 61, 105, 105, 20, 190, 56, 250, 197, 189, 115, 63, 172, 189, 130, 125, 43, 62, 43, 175, 34, 62, 47, 152, 221, 189, 198, 106, 73, 189, 74, 60, 179, 189, 161, 18, 156, 190, 191, 186, 196, 61, 99, 210, 51, 62, 164, 129, 40, 61, 228, 36, 7, 62, 103, 132, 53, 62, 187, 133, 36, 191, 197, 5, 53, 191, 168, 215, 85, 190, 165, 241, 209, 62, 51, 163, 206, 190, 123, 244, 171, 190, 128, 76, 81, 190, 104, 209, 13, 191, 104, 130, 33, 62, 160, 233, 50, 62, 29, 125, 27, 62, 94, 8, 7, 63, 25, 155, 18, 62, 156, 123, 242, 190, 250, 120, 220, 61, 208, 172, 217, 190, 50, 20, 227, 61, 8, 244, 106, 61, 241, 254, 28, 190, 161, 183, 205, 61, 123, 234, 167, 62, 172, 211, 174, 188, 144, 50, 37, 191, 93, 121, 1, 63, 110, 50, 166, 61, 159, 102, 76, 61, 63, 91, 20, 191, 3, 61, 223, 61, 233, 42, 31, 62, 144, 52, 30, 189, 104, 73, 101, 61, 42, 99, 231, 61, 118, 219, 99, 191, 183, 118, 125, 189, 28, 253, 135, 61, 244, 246, 224, 62, 149, 111, 223, 190, 93, 205, 160, 190, 31, 240, 205, 190, 144, 197, 23, 191, 207, 99, 204, 62, 201, 105, 130, 62, 240, 142, 209, 61, 34, 180, 131, 189, 162, 202, 116, 62, 127, 222, 6, 60, 188, 183, 95, 189, 215, 109, 23, 191, 39, 92, 10, 190, 176, 94, 61, 62, 140, 240, 188, 61, 32, 183, 26, 62, 163, 230, 207, 62, 222, 8, 195, 61, 104, 83, 22, 191, 196, 48, 158, 188, 245, 70, 22, 62, 232, 135, 209, 190, 246, 212, 71, 61, 165, 231, 45, 190, 123, 8, 211, 62, 33, 15, 226, 61, 99, 202, 5, 190, 159, 246, 18, 190, 203, 187, 224, 190, 230, 215, 98, 62, 112, 189, 82, 191, 50, 155, 59, 62, 237, 204, 40, 62, 232, 232, 164, 62, 50, 52, 113, 62, 231, 65, 231, 190, 134, 141, 103, 190, 152, 162, 25, 191, 168, 92, 83, 61, 190, 59, 53, 62, 245, 113, 3, 190, 57, 37, 138, 61, 129, 195, 110, 61, 255, 43, 200, 190, 196, 181, 244, 61, 125, 2, 117, 188, 146, 121, 155, 62, 196, 105, 184, 61, 227, 201, 13, 190, 153, 79, 144, 62, 194, 23, 43, 61, 114, 80, 173, 190, 72, 229, 39, 58, 228, 215, 136, 190, 66, 215, 212, 61, 220, 45, 139, 190, 164, 140, 16, 190, 165, 234, 56, 61, 73, 121, 202, 188, 139, 186, 192, 189, 98, 106, 11, 191, 165, 245, 36, 62, 145, 128, 69, 190, 229, 121, 174, 189, 207, 59, 168, 62, 152, 37, 141, 62, 115, 170, 123, 61, 106, 187, 109, 60, 2, 77, 194, 189, 137, 108, 190, 189, 52, 250, 97, 61, 44, 166, 179, 190, 223, 165, 105, 61, 173, 48, 248, 61, 95, 223, 122, 189, 178, 62, 126, 189, 106, 190, 97, 61, 15, 26, 60, 189, 186, 249, 71, 62, 34, 237, 171, 189, 147, 184, 147, 189, 114, 225, 133, 188, 123, 195, 87, 188, 245, 131, 97, 190, 178, 55, 117, 58, 20, 45, 85, 191, 58, 132, 17, 190, 124, 144, 165, 62, 44, 128, 78, 191, 107, 151, 195, 189, 180, 103, 95, 61, 116, 95, 209, 188, 90, 91, 133, 191, 241, 54, 139, 61, 207, 197, 114, 191, 111, 54, 146, 61, 233, 107, 43, 190, 223, 32, 206, 62, 239, 207, 182, 189, 81, 49, 92, 189, 206, 112, 85, 62, 197, 110, 166, 61, 81, 254, 50, 191, 4, 195, 162, 62, 191, 113, 123, 191, 7, 32, 227, 61, 78, 33, 214, 190, 197, 96, 253, 61, 11, 6, 0, 190, 102, 240, 22, 191, 36, 79, 4, 191, 164, 74, 31, 61, 104, 116, 17, 59, 161, 117, 3, 191, 5, 207, 115, 190, 68, 3, 145, 62, 3, 113, 64, 61, 167, 64, 176, 189, 141, 186, 144, 61, 250, 138, 143, 189, 181, 234, 251, 189, 57, 22, 144, 61, 75, 24, 93, 189, 21, 232, 52, 190, 1, 226, 91, 61, 236, 92, 83, 191, 2, 60, 100, 59, 233, 84, 32, 62, 56, 171, 180, 60, 137, 157, 73, 62, 3, 60, 216, 61, 115, 92, 65, 190, 238, 167, 59, 190, 116, 72, 221, 60, 132, 145, 109, 189, 105, 104, 97, 62, 215, 37, 109, 61, 187, 7, 17, 191, 178, 65, 3, 62, 224, 9, 153, 190, 184, 233, 62, 61, 74, 152, 228, 62, 117, 30, 126, 190, 213, 243, 131, 189, 242, 237, 125, 190, 195, 18, 236, 188, 104, 94, 87, 188, 186, 214, 150, 190, 194, 39, 94, 62, 166, 136, 134, 190, 227, 23, 18, 188, 149, 144, 128, 191, 22, 222, 7, 62, 188, 137, 37, 62, 181, 96, 234, 61, 150, 252, 48, 189, 13, 34, 149, 191, 113, 59, 129, 188, 107, 106, 133, 190, 44, 30, 252, 189, 34, 46, 184, 62, 192, 164, 36, 62, 75, 34, 144, 62, 15, 248, 47, 190, 250, 42, 152, 190, 220, 113, 35, 191, 249, 26, 128, 61, 140, 62, 53, 190, 98, 134, 250, 189, 219, 71, 49, 190, 234, 113, 25, 61, 130, 8, 239, 190, 141, 232, 98, 62, 45, 111, 77, 62, 211, 167, 168, 62, 127, 47, 80, 189, 10, 106, 162, 191, 222, 153, 101, 62, 116, 167, 78, 62, 250, 116, 187, 189, 47, 43, 154, 62, 161, 200, 86, 61, 78, 159, 32, 190, 130, 25, 56, 62, 137, 213, 240, 188, 81, 245, 134, 61, 115, 124, 29, 62, 152, 29, 158, 61, 94, 82, 91, 191, 85, 14, 226, 61, 149, 220, 134, 62, 128, 180, 201, 62, 85, 191, 3, 191, 165, 174, 68, 61, 206, 110, 66, 190, 18, 186, 231, 190, 41, 74, 82, 62, 40, 151, 84, 62, 16, 247, 118, 61, 98, 217, 93, 62, 102, 177, 190, 58, 203, 229, 44, 62, 11, 11, 150, 61, 168, 149, 39, 191, 141, 206, 248, 190, 70, 156, 89, 61, 100, 11, 53, 189, 248, 218, 208, 60, 81, 43, 137, 62, 147, 233, 57, 60, 25, 63, 81, 190, 188, 115, 226, 188, 77, 146, 237, 61, 191, 159, 34, 191, 234, 164, 63, 61, 48, 121, 62, 191, 176, 55, 130, 62, 251, 248, 145, 61, 227, 234, 38, 62, 245, 213, 80, 189, 96, 160, 173, 190, 41, 176, 227, 189, 166, 13, 51, 191, 232, 78, 221, 189, 106, 30, 5, 62, 98, 150, 34, 61, 229, 102, 104, 62, 222, 58, 165, 190, 40, 193, 214, 190, 195, 199, 205, 190, 158, 140, 41, 190, 178, 169, 133, 62, 231, 191, 54, 190, 94, 136, 217, 188, 238, 243, 214, 62, 112, 196, 139, 190, 217, 29, 223, 61, 225, 24, 8, 190, 52, 30, 216, 62, 208, 247, 162, 61, 228, 232, 255, 190, 60, 203, 128, 62, 246, 65, 125, 189, 38, 255, 133, 61, 230, 135, 205, 189, 182, 225, 140, 62, 131, 180, 173, 189, 33, 77, 145, 190, 64, 198, 180, 59, 142, 147, 120, 62, 186, 194, 167, 190, 141, 230, 79, 62, 130, 185, 0, 63, 131, 215, 134, 190, 241, 44, 18, 189, 208, 227, 33, 62, 76, 151, 45, 62, 55, 246, 70, 62, 56, 90, 242, 190, 176, 6, 106, 61, 121, 92, 31, 190, 31, 141, 155, 60, 162, 160, 69, 61, 56, 12, 91, 62, 84, 183, 229, 61, 199, 32, 167, 61, 40, 209, 218, 61, 173, 2, 192, 62, 52, 252, 251, 190, 199, 92, 180, 62, 143, 84, 4, 190, 100, 36, 46, 59, 221, 91, 8, 190, 249, 249, 245, 59, 131, 232, 140, 61};
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
                alignas(float) const unsigned char memory[] = {122, 75, 102, 59, 62, 114, 12, 62, 96, 4, 49, 189, 62, 160, 254, 61, 81, 193, 31, 189, 91, 81, 133, 61, 148, 71, 162, 59, 155, 205, 8, 62, 13, 255, 41, 61, 158, 241, 84, 62, 9, 116, 177, 62, 90, 145, 0, 62, 119, 132, 50, 190, 160, 70, 197, 60, 92, 61, 127, 62, 173, 182, 30, 190, 242, 112, 169, 189, 204, 142, 93, 188, 100, 159, 182, 60, 69, 76, 203, 62, 21, 241, 59, 62, 137, 25, 144, 189, 18, 174, 220, 61, 55, 185, 134, 62, 29, 69, 140, 188, 138, 115, 193, 61, 23, 124, 138, 61, 74, 214, 9, 190, 0, 78, 29, 62, 15, 207, 216, 62, 59, 178, 197, 189, 93, 123, 159, 61};
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
                alignas(float) const unsigned char memory[] = {94, 54, 73, 191, 29, 78, 198, 190, 70, 0, 171, 62, 134, 52, 251, 190, 60, 109, 182, 189, 173, 68, 244, 190, 96, 254, 228, 190, 74, 151, 14, 63, 214, 100, 117, 61, 74, 218, 76, 62, 49, 150, 37, 191, 238, 131, 141, 63, 132, 168, 40, 188, 84, 150, 37, 62, 104, 246, 90, 63, 118, 67, 80, 61, 218, 254, 16, 190, 160, 120, 150, 62, 244, 218, 252, 62, 138, 241, 225, 189, 248, 58, 144, 63, 151, 209, 172, 190, 248, 62, 64, 191, 33, 93, 62, 191, 39, 152, 165, 62, 44, 86, 164, 61, 196, 33, 11, 191, 108, 232, 28, 190, 3, 129, 54, 63, 13, 61, 200, 190, 94, 139, 254, 62, 108, 241, 153, 62, 189, 164, 232, 62, 73, 17, 177, 189, 73, 160, 23, 62, 51, 89, 69, 190, 133, 247, 253, 189, 102, 186, 243, 188, 241, 90, 141, 61, 0, 5, 31, 189, 142, 52, 21, 62, 101, 200, 11, 190, 186, 115, 199, 189, 250, 105, 144, 62, 82, 140, 150, 189, 32, 15, 212, 189, 89, 188, 84, 61, 151, 178, 111, 62, 19, 153, 213, 189, 110, 205, 48, 62, 48, 131, 169, 60, 104, 185, 117, 190, 211, 63, 110, 62, 15, 174, 132, 189, 238, 15, 175, 62, 141, 163, 214, 189, 128, 98, 218, 190, 199, 10, 61, 189, 192, 109, 157, 190, 162, 120, 234, 62, 221, 182, 250, 189, 6, 218, 244, 189, 18, 223, 81, 61, 104, 225, 20, 189};
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
                alignas(float) const unsigned char memory[] = {245, 248, 169, 188, 118, 17, 230, 190};
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
    alignas(float) const unsigned char memory[] = {52, 35, 177, 188, 195, 128, 206, 63, 142, 213, 34, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {98, 125, 114, 64, 35, 92, 138, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0042/steps/000000000014000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}