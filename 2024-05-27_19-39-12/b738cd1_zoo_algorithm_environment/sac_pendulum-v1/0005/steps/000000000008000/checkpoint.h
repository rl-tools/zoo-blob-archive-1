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
                alignas(float) const unsigned char memory[] = {254, 48, 1, 63, 99, 218, 128, 190, 12, 52, 129, 62, 18, 162, 238, 61, 26, 159, 178, 190, 211, 59, 240, 190, 151, 180, 63, 63, 181, 129, 60, 191, 193, 21, 208, 190, 242, 41, 9, 191, 35, 96, 23, 191, 2, 214, 156, 188, 248, 237, 175, 190, 76, 230, 168, 190, 2, 176, 243, 188, 175, 10, 141, 190, 210, 185, 116, 63, 70, 111, 127, 61, 142, 223, 231, 62, 255, 106, 159, 62, 117, 209, 8, 63, 61, 9, 123, 191, 188, 122, 64, 190, 205, 94, 50, 61, 200, 176, 70, 63, 190, 162, 73, 189, 236, 119, 215, 62, 40, 96, 173, 62, 136, 14, 37, 63, 31, 27, 0, 191, 61, 179, 201, 62, 244, 66, 112, 191, 163, 55, 73, 190, 10, 11, 212, 62, 124, 97, 23, 63, 154, 211, 226, 190, 252, 203, 104, 63, 228, 201, 166, 62, 45, 147, 237, 62, 120, 161, 153, 190, 5, 68, 17, 63, 91, 239, 30, 63, 255, 59, 207, 190, 107, 81, 153, 190, 28, 139, 247, 189, 19, 148, 79, 191, 250, 184, 82, 188, 230, 253, 22, 63, 214, 66, 127, 63, 15, 50, 27, 190, 217, 236, 169, 59, 24, 175, 183, 61, 159, 144, 153, 191, 210, 121, 82, 190, 177, 186, 110, 190, 144, 98, 208, 188, 46, 151, 178, 62, 180, 79, 255, 60, 116, 83, 73, 63, 10, 152, 152, 188, 188, 1, 36, 63, 97, 64, 128, 191, 45, 48, 44, 190, 149, 17, 100, 63, 223, 236, 33, 191, 133, 253, 136, 190, 192, 97, 227, 61, 105, 137, 142, 62, 50, 218, 93, 62, 7, 125, 246, 190, 188, 24, 89, 191, 33, 49, 175, 190, 65, 128, 114, 191, 33, 250, 41, 62, 165, 187, 2, 190, 227, 105, 71, 63, 6, 202, 106, 62, 119, 185, 240, 190, 238, 138, 155, 62, 239, 189, 52, 63, 92, 33, 44, 190, 194, 26, 135, 63, 5, 32, 37, 63, 114, 32, 54, 190, 33, 83, 240, 189, 92, 18, 32, 191, 241, 45, 40, 191, 242, 84, 7, 191, 8, 69, 96, 63, 148, 239, 153, 62, 3, 0, 34, 62, 48, 78, 55, 191, 222, 49, 66, 62, 196, 235, 160, 190, 72, 140, 58, 191, 79, 73, 157, 190};
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
                alignas(float) const unsigned char memory[] = {13, 144, 125, 191, 74, 198, 44, 191, 127, 110, 42, 191, 65, 188, 73, 63, 129, 31, 56, 191, 149, 26, 145, 62, 179, 112, 111, 191, 115, 238, 249, 188, 73, 51, 222, 190, 150, 57, 72, 61, 162, 217, 95, 61, 235, 65, 1, 62, 187, 179, 163, 189, 170, 131, 234, 61, 229, 157, 4, 63, 85, 168, 98, 190, 36, 217, 53, 63, 209, 25, 56, 62, 75, 163, 151, 62, 79, 179, 133, 62, 78, 199, 119, 62, 156, 22, 234, 190, 218, 16, 240, 62, 93, 128, 39, 191, 52, 42, 35, 62, 165, 127, 162, 190, 146, 63, 23, 63, 150, 118, 155, 189, 150, 245, 97, 190, 209, 52, 20, 63, 189, 167, 41, 62, 108, 231, 168, 190};
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
                alignas(float) const unsigned char memory[] = {115, 192, 187, 189, 37, 149, 9, 190, 163, 181, 47, 189, 209, 68, 154, 62, 165, 234, 206, 189, 135, 105, 61, 190, 141, 237, 111, 190, 232, 116, 70, 62, 238, 15, 255, 61, 27, 32, 127, 189, 128, 155, 26, 190, 93, 248, 95, 189, 55, 218, 63, 61, 94, 235, 28, 190, 55, 122, 136, 62, 49, 244, 177, 61, 13, 238, 114, 62, 61, 13, 138, 189, 52, 112, 225, 188, 41, 163, 161, 189, 234, 1, 81, 62, 107, 135, 245, 61, 248, 86, 74, 62, 37, 146, 171, 61, 204, 45, 139, 61, 65, 251, 70, 61, 167, 177, 31, 62, 90, 231, 27, 62, 76, 107, 67, 61, 180, 95, 165, 61, 131, 102, 73, 62, 34, 55, 241, 189, 88, 20, 12, 62, 200, 61, 155, 190, 243, 91, 22, 191, 94, 103, 32, 190, 109, 35, 166, 188, 224, 94, 42, 190, 249, 120, 194, 61, 172, 122, 3, 189, 143, 49, 33, 62, 146, 209, 220, 61, 185, 60, 115, 190, 84, 131, 194, 62, 14, 179, 79, 60, 129, 103, 52, 190, 167, 212, 227, 59, 80, 30, 87, 61, 116, 1, 166, 62, 4, 245, 255, 190, 11, 92, 70, 190, 253, 94, 131, 189, 88, 202, 178, 61, 186, 167, 29, 191, 254, 131, 32, 61, 166, 146, 118, 190, 225, 196, 88, 190, 249, 97, 191, 189, 58, 96, 106, 61, 67, 109, 143, 62, 186, 39, 14, 62, 157, 241, 6, 191, 127, 14, 85, 61, 134, 27, 253, 61, 106, 166, 170, 190, 71, 220, 151, 190, 40, 145, 186, 61, 213, 59, 28, 61, 165, 84, 105, 61, 7, 65, 41, 62, 228, 218, 21, 190, 53, 189, 182, 62, 215, 104, 133, 61, 35, 25, 142, 190, 25, 69, 211, 62, 177, 15, 86, 190, 151, 42, 72, 190, 201, 199, 171, 61, 33, 248, 0, 62, 232, 232, 67, 62, 57, 153, 155, 61, 79, 253, 138, 62, 174, 248, 157, 61, 175, 120, 153, 61, 95, 231, 39, 62, 212, 54, 18, 63, 216, 99, 160, 61, 202, 216, 48, 191, 128, 209, 103, 190, 178, 97, 92, 61, 237, 190, 128, 190, 88, 90, 140, 62, 7, 46, 82, 191, 14, 2, 17, 62, 37, 230, 94, 62, 83, 126, 199, 191, 17, 64, 247, 189, 151, 8, 241, 187, 198, 204, 237, 189, 176, 104, 153, 189, 89, 27, 171, 189, 21, 226, 193, 61, 221, 51, 17, 61, 126, 89, 8, 62, 173, 150, 219, 189, 234, 220, 174, 60, 40, 218, 206, 61, 118, 212, 49, 190, 169, 85, 223, 189, 170, 239, 183, 60, 78, 82, 163, 61, 151, 146, 201, 61, 39, 19, 23, 190, 251, 192, 22, 190, 107, 239, 24, 62, 119, 85, 232, 61, 71, 54, 12, 61, 104, 188, 126, 61, 139, 255, 78, 190, 2, 108, 74, 190, 83, 137, 238, 60, 141, 58, 88, 189, 196, 29, 228, 61, 1, 53, 176, 58, 116, 177, 62, 190, 148, 156, 48, 190, 29, 244, 6, 190, 215, 84, 66, 190, 207, 35, 49, 62, 31, 60, 6, 190, 91, 140, 212, 190, 242, 204, 82, 62, 57, 217, 192, 61, 59, 177, 46, 190, 224, 27, 248, 189, 147, 25, 66, 61, 227, 78, 194, 186, 230, 175, 244, 61, 101, 102, 35, 190, 61, 91, 31, 60, 192, 230, 234, 61, 25, 22, 44, 190, 170, 230, 75, 62, 206, 120, 139, 188, 34, 152, 198, 62, 101, 10, 166, 190, 22, 136, 199, 61, 17, 209, 169, 189, 229, 155, 78, 190, 31, 122, 31, 191, 15, 147, 116, 62, 164, 208, 249, 189, 30, 63, 192, 62, 168, 77, 30, 188, 140, 55, 19, 62, 64, 110, 56, 62, 253, 169, 112, 190, 51, 159, 49, 62, 114, 69, 81, 62, 53, 44, 160, 61, 46, 65, 144, 62, 195, 21, 5, 189, 211, 98, 151, 190, 221, 239, 101, 62, 170, 0, 114, 190, 129, 186, 196, 59, 220, 222, 114, 60, 188, 108, 26, 62, 11, 234, 36, 189, 155, 42, 242, 61, 159, 65, 146, 190, 180, 34, 201, 61, 209, 234, 2, 62, 46, 150, 8, 62, 81, 126, 55, 189, 183, 212, 65, 188, 68, 153, 122, 62, 150, 158, 121, 190, 76, 246, 176, 189, 76, 102, 226, 60, 4, 183, 48, 61, 174, 190, 63, 191, 59, 241, 27, 62, 177, 120, 74, 62, 107, 48, 182, 62, 60, 106, 54, 190, 143, 87, 99, 62, 182, 84, 3, 189, 196, 103, 47, 186, 69, 69, 130, 61, 181, 126, 22, 60, 210, 159, 177, 59, 53, 70, 215, 60, 205, 145, 170, 190, 21, 25, 209, 190, 72, 182, 130, 61, 212, 244, 58, 189, 19, 136, 143, 190, 45, 75, 128, 62, 215, 233, 79, 62, 161, 215, 155, 62, 86, 239, 38, 62, 239, 203, 227, 190, 112, 143, 106, 61, 66, 55, 218, 62, 52, 100, 239, 190, 119, 143, 152, 189, 194, 80, 31, 191, 18, 32, 89, 62, 197, 35, 147, 190, 207, 142, 157, 189, 254, 89, 183, 61, 189, 201, 162, 189, 211, 184, 38, 191, 203, 142, 62, 61, 64, 178, 156, 190, 63, 224, 57, 62, 13, 252, 225, 189, 98, 219, 91, 61, 144, 227, 121, 62, 77, 142, 38, 62, 244, 189, 11, 191, 207, 247, 174, 190, 9, 237, 68, 189, 11, 221, 210, 190, 248, 231, 153, 188, 42, 208, 225, 190, 75, 212, 171, 62, 229, 33, 241, 189, 218, 237, 16, 62, 153, 34, 192, 190, 10, 30, 203, 62, 101, 231, 117, 190, 214, 3, 120, 191, 114, 152, 231, 61, 116, 135, 20, 191, 110, 18, 25, 190, 88, 67, 253, 189, 63, 127, 202, 62, 126, 105, 181, 61, 198, 226, 57, 190, 52, 169, 128, 62, 31, 73, 37, 62, 94, 152, 188, 189, 80, 170, 175, 62, 38, 37, 170, 189, 255, 109, 54, 62, 177, 54, 82, 191, 74, 74, 94, 189, 155, 190, 225, 190, 89, 137, 137, 190, 25, 0, 68, 190, 128, 243, 2, 191, 108, 160, 33, 62, 12, 119, 158, 62, 168, 162, 169, 191, 145, 216, 232, 60, 215, 25, 170, 189, 18, 75, 240, 190, 169, 132, 24, 62, 10, 129, 8, 190, 129, 111, 174, 190, 218, 10, 106, 189, 98, 210, 29, 189, 166, 125, 58, 62, 202, 42, 84, 62, 42, 165, 141, 190, 148, 129, 11, 188, 37, 8, 101, 62, 231, 171, 36, 62, 80, 199, 171, 60, 213, 167, 144, 190, 29, 180, 198, 62, 227, 200, 137, 190, 126, 198, 141, 61, 184, 8, 77, 190, 36, 64, 235, 187, 6, 34, 82, 191, 73, 160, 0, 189, 136, 5, 37, 57, 93, 144, 123, 62, 201, 152, 36, 190, 121, 187, 103, 62, 228, 18, 141, 59, 50, 201, 22, 62, 157, 253, 247, 188, 169, 72, 155, 189, 123, 43, 42, 62, 85, 125, 106, 189, 164, 112, 152, 189, 107, 139, 160, 190, 38, 20, 209, 61, 217, 134, 21, 190, 181, 23, 184, 62, 31, 162, 66, 190, 63, 37, 210, 62, 99, 193, 191, 189, 6, 109, 225, 190, 217, 230, 46, 191, 197, 223, 18, 190, 32, 166, 126, 189, 109, 90, 6, 189, 175, 47, 141, 61, 156, 6, 20, 190, 82, 190, 94, 61, 94, 8, 133, 191, 88, 224, 76, 190, 94, 173, 248, 62, 246, 7, 74, 189, 27, 7, 188, 190, 114, 0, 18, 189, 40, 135, 23, 191, 163, 94, 219, 62, 240, 190, 151, 189, 29, 173, 57, 62, 213, 64, 5, 62, 39, 200, 209, 190, 126, 80, 35, 190, 186, 151, 203, 189, 219, 34, 248, 190, 100, 12, 73, 60, 81, 123, 240, 61, 15, 103, 75, 189, 75, 24, 85, 60, 128, 164, 231, 61, 122, 109, 23, 191, 183, 99, 143, 190, 185, 120, 151, 190, 155, 18, 126, 62, 195, 177, 8, 62, 181, 186, 130, 62, 59, 114, 210, 61, 33, 41, 26, 61, 63, 51, 161, 190, 38, 245, 32, 190, 186, 19, 15, 190, 15, 86, 184, 62, 61, 239, 238, 60, 64, 218, 143, 190, 115, 204, 114, 190, 37, 36, 246, 60, 70, 102, 215, 62, 249, 30, 4, 62, 161, 95, 23, 189, 33, 223, 190, 188, 199, 121, 96, 62, 145, 106, 20, 62, 40, 169, 172, 62, 191, 108, 166, 186, 152, 180, 20, 191, 210, 41, 194, 62, 230, 29, 113, 62, 138, 207, 14, 191, 74, 248, 25, 190, 1, 113, 236, 189, 28, 187, 213, 188, 179, 207, 71, 61, 73, 97, 4, 190, 13, 207, 145, 190, 141, 2, 215, 61, 158, 46, 112, 189, 21, 197, 90, 189, 117, 233, 197, 61, 197, 54, 167, 188, 102, 60, 28, 188, 207, 62, 168, 61, 98, 82, 222, 61, 137, 39, 13, 62, 58, 59, 230, 61, 132, 114, 71, 61, 227, 107, 95, 61, 236, 10, 4, 62, 26, 31, 134, 62, 191, 106, 77, 62, 178, 193, 165, 187, 252, 109, 178, 189, 144, 116, 193, 61, 162, 12, 88, 189, 79, 110, 112, 62, 1, 37, 43, 62, 24, 255, 1, 188, 56, 113, 43, 190, 110, 205, 13, 62, 191, 238, 183, 189, 104, 118, 3, 62, 143, 163, 141, 61, 117, 199, 19, 62, 80, 119, 230, 60, 92, 70, 83, 189, 77, 115, 235, 189, 129, 58, 41, 190, 82, 102, 238, 189, 106, 72, 82, 61, 228, 139, 132, 61, 229, 159, 136, 187, 3, 159, 133, 189, 49, 159, 173, 61, 207, 184, 5, 190, 179, 189, 2, 62, 48, 113, 27, 190, 254, 192, 225, 186, 178, 79, 76, 190, 106, 93, 246, 189, 161, 80, 39, 188, 154, 204, 247, 61, 151, 111, 162, 189, 134, 118, 34, 189, 132, 199, 4, 190, 136, 153, 1, 188, 52, 71, 77, 190, 102, 177, 18, 190, 99, 65, 165, 189, 69, 198, 158, 59, 116, 11, 180, 60, 188, 220, 25, 190, 36, 6, 241, 189, 107, 211, 8, 189, 67, 34, 73, 188, 218, 70, 26, 190, 16, 7, 77, 62, 179, 202, 85, 190, 159, 117, 239, 60, 25, 48, 255, 188, 27, 181, 204, 62, 156, 179, 122, 189, 65, 133, 186, 189, 115, 91, 16, 191, 41, 70, 239, 189, 79, 113, 136, 190, 38, 98, 41, 191, 107, 241, 96, 62, 163, 10, 134, 190, 8, 161, 41, 191, 34, 8, 109, 62, 224, 187, 247, 189, 136, 33, 221, 189, 102, 16, 168, 189, 168, 165, 146, 191, 52, 216, 183, 189, 81, 221, 156, 62, 74, 28, 147, 62, 246, 173, 78, 190, 135, 213, 140, 61, 133, 131, 147, 190, 152, 203, 37, 62, 187, 156, 10, 189, 91, 69, 164, 190, 183, 209, 141, 62, 229, 161, 245, 62, 147, 10, 208, 189, 43, 91, 17, 191, 3, 165, 162, 60, 161, 128, 47, 190, 40, 145, 123, 190, 49, 227, 193, 62, 92, 124, 82, 61, 2, 232, 141, 62, 39, 219, 91, 61, 167, 153, 12, 191, 5, 12, 225, 62, 61, 143, 156, 62, 138, 56, 103, 189, 20, 242, 237, 190, 142, 231, 226, 189, 109, 226, 172, 62, 213, 219, 29, 191, 206, 63, 93, 189, 105, 100, 22, 190, 67, 226, 170, 190, 108, 142, 27, 191, 214, 51, 17, 60, 251, 248, 164, 189, 118, 199, 82, 188, 206, 62, 138, 190, 28, 216, 53, 62, 222, 222, 136, 62, 131, 76, 38, 62, 244, 96, 104, 190, 250, 87, 141, 186, 65, 201, 170, 62, 12, 176, 236, 190, 134, 211, 20, 190, 202, 173, 215, 60, 242, 3, 192, 61, 16, 31, 71, 62, 121, 104, 89, 62, 253, 196, 192, 190, 132, 45, 5, 190, 99, 100, 13, 190, 224, 169, 137, 188, 81, 90, 212, 62, 163, 48, 253, 61, 197, 80, 228, 190, 162, 176, 174, 189, 150, 11, 40, 62, 87, 227, 179, 62, 33, 61, 142, 62, 207, 109, 11, 62, 125, 131, 111, 62, 206, 3, 201, 61, 158, 131, 102, 188, 243, 14, 243, 62, 97, 38, 176, 187, 209, 234, 136, 189, 200, 222, 166, 61, 204, 190, 169, 61, 113, 78, 50, 62, 122, 119, 204, 62, 249, 251, 45, 190, 55, 103, 91, 189, 8, 183, 232, 62, 45, 10, 51, 190, 179, 89, 4, 190, 134, 217, 61, 189, 2, 225, 1, 190, 127, 74, 16, 190, 38, 243, 35, 190, 115, 223, 222, 188, 136, 233, 223, 189, 81, 126, 3, 190, 171, 12, 252, 189, 56, 160, 43, 190, 115, 200, 25, 190, 252, 21, 20, 189, 225, 69, 249, 61, 19, 177, 26, 60, 100, 70, 118, 189, 150, 204, 158, 189, 243, 117, 186, 59, 163, 157, 51, 190, 90, 155, 247, 189, 36, 198, 255, 189, 158, 130, 214, 60, 112, 185, 157, 189, 1, 217, 80, 188, 2, 20, 97, 60, 172, 142, 153, 60, 226, 115, 226, 60, 139, 116, 239, 60, 77, 13, 40, 190, 193, 129, 48, 62, 120, 155, 178, 59, 121, 11, 31, 61, 73, 85, 99, 189, 167, 24, 3, 62, 255, 158, 41, 62, 5, 35, 1, 62, 40, 181, 255, 188, 246, 6, 74, 61, 68, 7, 8, 190, 246, 70, 24, 190, 239, 65, 76, 190, 80, 228, 238, 188, 232, 112, 150, 189, 98, 17, 145, 188, 64, 54, 69, 190, 11, 26, 204, 61, 84, 15, 178, 189, 196, 63, 201, 188, 32, 224, 37, 60, 129, 107, 91, 61, 230, 68, 83, 190, 63, 88, 209, 189, 74, 197, 28, 190, 159, 15, 240, 189, 166, 23, 5, 190, 242, 56, 173, 61, 82, 185, 209, 189, 68, 202, 230, 188, 218, 52, 79, 61, 112, 107, 151, 189, 88, 142, 198, 189, 246, 108, 240, 60, 11, 95, 164, 187, 239, 97, 26, 189, 109, 107, 63, 61, 98, 181, 115, 190, 54, 111, 30, 62, 198, 25, 52, 61, 51, 11, 62, 62, 168, 243, 129, 60, 153, 186, 141, 62, 87, 209, 170, 190, 42, 167, 74, 62, 123, 69, 232, 190, 64, 43, 67, 189, 99, 75, 198, 62, 6, 165, 91, 190, 195, 127, 33, 191, 29, 27, 243, 61, 23, 17, 8, 62, 154, 135, 2, 61, 35, 159, 142, 186, 44, 35, 233, 62, 193, 222, 31, 62, 93, 222, 203, 190, 53, 251, 144, 62, 251, 215, 47, 61, 3, 143, 64, 61, 169, 154, 15, 62, 82, 139, 251, 60, 28, 203, 10, 189, 137, 223, 145, 61, 104, 144, 31, 191, 57, 80, 133, 61, 94, 122, 127, 62, 100, 9, 84, 61, 233, 142, 68, 61, 164, 181, 42, 190, 8, 192, 45, 61, 192, 181, 248, 188, 235, 76, 33, 190, 162, 169, 38, 61, 247, 197, 140, 60, 182, 3, 105, 60, 30, 53, 185, 59, 11, 6, 4, 61, 99, 126, 82, 190, 1, 105, 133, 61, 108, 213, 18, 189, 107, 97, 66, 190, 138, 193, 9, 62, 161, 252, 214, 189, 241, 144, 83, 189, 250, 147, 205, 61, 51, 189, 27, 190, 150, 8, 14, 61, 192, 105, 204, 61, 222, 211, 39, 190, 111, 141, 17, 62, 88, 26, 11, 190, 116, 237, 158, 61, 92, 241, 18, 62, 145, 4, 228, 61, 0, 150, 252, 189, 38, 107, 248, 61, 135, 32, 122, 61, 207, 75, 218, 189, 39, 159, 163, 189, 166, 57, 140, 59, 173, 160, 19, 62, 43, 180, 215, 61, 19, 38, 123, 189, 58, 219, 239, 61, 204, 35, 105, 189, 74, 4, 30, 188, 153, 59, 6, 189, 5, 128, 217, 60, 42, 230, 45, 190, 138, 169, 27, 189, 84, 240, 240, 189, 228, 94, 197, 61, 147, 195, 4, 190, 250, 35, 239, 189, 232, 35, 29, 61, 236, 135, 223, 189, 94, 137, 37, 188, 31, 139, 166, 189, 3, 195, 231, 61, 161, 250, 12, 190, 154, 214, 212, 60, 242, 89, 234, 59, 246, 93, 207, 188, 68, 174, 133, 188, 110, 244, 187, 189, 14, 112, 49, 190, 98, 174, 20, 190, 6, 233, 110, 188, 204, 158, 162, 189, 103, 83, 203, 189, 133, 51, 84, 189, 20, 189, 183, 189, 209, 128, 222, 190, 185, 195, 206, 189, 130, 154, 5, 62, 160, 68, 249, 189, 40, 17, 28, 62, 36, 233, 3, 189, 61, 122, 62, 189, 13, 43, 74, 62, 77, 108, 204, 189, 182, 39, 47, 61, 63, 147, 84, 62, 215, 7, 82, 189, 255, 201, 199, 189, 79, 194, 80, 62, 50, 208, 122, 61, 109, 253, 48, 61, 130, 71, 3, 190, 220, 123, 94, 190, 200, 144, 19, 62, 172, 106, 90, 189, 158, 224, 84, 62, 88, 93, 189, 62, 184, 200, 10, 188, 57, 11, 51, 190, 210, 199, 48, 190, 195, 212, 51, 62, 154, 137, 181, 189, 8, 184, 100, 60, 12, 45, 110, 190, 233, 165, 186, 60, 241, 76, 202, 189, 58, 106, 85, 190, 31, 177, 170, 188, 78, 9, 73, 62, 98, 234, 241, 62, 198, 218, 247, 189, 172, 87, 126, 61, 97, 130, 233, 190, 30, 143, 12, 61, 116, 169, 127, 191, 138, 141, 88, 190, 232, 148, 152, 189, 84, 227, 130, 62, 119, 166, 194, 188, 21, 196, 26, 191, 63, 217, 202, 60, 108, 87, 19, 190, 243, 254, 205, 189, 200, 155, 77, 186, 157, 166, 82, 62, 224, 62, 47, 62, 188, 219, 59, 191, 161, 44, 220, 61, 7, 42, 31, 63, 54, 225, 199, 190, 174, 64, 87, 190, 114, 113, 92, 191, 42, 186, 245, 60, 193, 38, 81, 190, 149, 209, 218, 61, 255, 105, 213, 61, 52, 16, 132, 190, 7, 245, 178, 62, 3, 72, 201, 190, 196, 57, 30, 190, 231, 137, 119, 62, 191, 224, 135, 62, 203, 150, 201, 61, 254, 145, 55, 61, 206, 122, 49, 190, 91, 24, 249, 187, 29, 0, 130, 190, 99, 148, 118, 61, 173, 78, 204, 61, 142, 215, 215, 61, 170, 105, 25, 190, 152, 208, 106, 189, 1, 10, 174, 189, 244, 161, 217, 188, 231, 13, 189, 61, 219, 5, 242, 61, 59, 7, 152, 61, 245, 56, 72, 190, 65, 182, 170, 189, 140, 89, 131, 62, 159, 241, 164, 62, 62, 228, 83, 61, 173, 130, 34, 62, 97, 9, 233, 189, 155, 32, 159, 189, 156, 157, 73, 190, 4, 188, 131, 61, 117, 25, 56, 62, 201, 171, 205, 190, 116, 2, 205, 62, 82, 89, 85, 62, 58, 197, 179, 61, 23, 45, 173, 189, 120, 162, 24, 62, 48, 100, 198, 58, 81, 131, 51, 62, 225, 248, 27, 190, 155, 251, 194, 61, 219, 203, 66, 189, 213, 238, 167, 61, 63, 210, 25, 187, 55, 141, 14, 62, 247, 92, 21, 190, 4, 1, 134, 189, 208, 47, 34, 190, 49, 40, 55, 189, 87, 3, 210, 61, 252, 186, 210, 189, 93, 147, 170, 189, 18, 70, 174, 188, 5, 149, 206, 189, 181, 233, 76, 189, 9, 171, 43, 62, 52, 106, 14, 60, 43, 225, 39, 190, 46, 0, 187, 61, 130, 23, 22, 190, 180, 137, 3, 190, 178, 144, 23, 61, 179, 235, 26, 60, 198, 36, 207, 189, 196, 61, 184, 61, 115, 66, 192, 61, 206, 147, 23, 62, 117, 157, 102, 60, 108, 179, 111, 62, 180, 47, 236, 189, 9, 197, 208, 58, 145, 123, 31, 62, 202, 25, 182, 62, 226, 215, 251, 190, 53, 106, 172, 62, 223, 135, 83, 190, 178, 203, 148, 61, 45, 114, 209, 61, 24, 191, 191, 62, 53, 101, 42, 190, 27, 80, 239, 188, 235, 56, 63, 190, 229, 13, 108, 62, 49, 126, 151, 61, 218, 219, 219, 188, 28, 43, 71, 62, 36, 151, 190, 61, 124, 185, 41, 62, 226, 203, 70, 189, 228, 196, 134, 62, 72, 131, 198, 190, 156, 143, 78, 62, 182, 39, 45, 190, 93, 203, 161, 58, 94, 114, 68, 62, 207, 149, 72, 62, 118, 216, 241, 190, 215, 200, 57, 188, 164, 221, 112, 61, 5, 56, 154, 61, 251, 75, 147, 61, 205, 26, 236, 188, 62, 105, 46, 190, 149, 49, 135, 61, 195, 181, 41, 62, 80, 18, 20, 190, 233, 100, 243, 189, 22, 171, 182, 61, 223, 49, 223, 60, 155, 231, 233, 61, 192, 244, 31, 189, 80, 126, 87, 61, 78, 173, 1, 188, 151, 148, 173, 61, 31, 57, 136, 189, 194, 138, 144, 189, 94, 0, 235, 189, 122, 58, 0, 62, 100, 204, 100, 190, 172, 182, 37, 61, 134, 227, 99, 61, 130, 39, 49, 190, 124, 59, 75, 190, 230, 93, 213, 189, 145, 198, 24, 190, 247, 136, 82, 190, 28, 225, 223, 60, 195, 128, 72, 190, 22, 148, 26, 190, 144, 28, 203, 61, 134, 83, 189, 190, 89, 52, 225, 189, 0, 118, 196, 190, 59, 155, 161, 61, 228, 31, 254, 189, 94, 8, 133, 62, 61, 252, 119, 190, 233, 158, 125, 62, 147, 94, 42, 190, 173, 38, 236, 189, 192, 125, 3, 191, 219, 32, 1, 190, 114, 78, 162, 190, 42, 88, 19, 191, 54, 177, 157, 62, 72, 192, 21, 190, 84, 172, 62, 191, 133, 114, 27, 191, 197, 185, 155, 189, 114, 30, 61, 62, 174, 245, 179, 190, 60, 249, 32, 190, 225, 144, 153, 190, 131, 140, 59, 191, 194, 15, 221, 62, 163, 164, 194, 189, 52, 83, 3, 62, 122, 216, 204, 189, 196, 95, 212, 190, 124, 64, 173, 60, 157, 84, 205, 189, 116, 130, 22, 191, 58, 150, 141, 189, 171, 14, 15, 191, 54, 45, 226, 190, 142, 242, 7, 62, 118, 36, 56, 61, 203, 205, 116, 62, 91, 74, 191, 189, 119, 218, 155, 62, 148, 6, 46, 189, 172, 34, 141, 60, 8, 17, 140, 62, 208, 89, 66, 61, 0, 173, 23, 190, 4, 166, 0, 191, 110, 187, 87, 62, 167, 68, 165, 189, 78, 158, 165, 189, 178, 91, 111, 62, 68, 96, 16, 191, 142, 168, 82, 61, 104, 69, 240, 61, 196, 218, 137, 190, 145, 153, 245, 189, 8, 140, 203, 189, 145, 118, 126, 62, 134, 37, 23, 191, 5, 93, 81, 190, 171, 25, 13, 191, 226, 126, 236, 60, 92, 83, 88, 190, 79, 152, 59, 189, 43, 242, 230, 61, 168, 90, 44, 62, 163, 83, 164, 187, 182, 68, 14, 190, 237, 196, 26, 62, 154, 220, 182, 61, 110, 5, 59, 190, 224, 136, 159, 189, 198, 53, 50, 190, 93, 102, 79, 189, 73, 38, 131, 189, 0, 71, 31, 188, 74, 45, 41, 190, 171, 48, 159, 60, 216, 172, 13, 190, 18, 32, 57, 190, 130, 130, 124, 61, 53, 253, 21, 190, 27, 252, 125, 61, 176, 107, 12, 60, 247, 244, 50, 190, 235, 74, 226, 189, 236, 96, 176, 188, 217, 177, 25, 62, 110, 17, 190, 57, 178, 192, 157, 61, 117, 135, 48, 62, 43, 243, 36, 60, 187, 154, 73, 61, 70, 71, 158, 189, 10, 231, 47, 60, 155, 55, 245, 189, 218, 233, 219, 60, 116, 180, 181, 190, 209, 14, 44, 190, 196, 175, 106, 189, 33, 14, 145, 190, 13, 43, 195, 189, 44, 168, 197, 62, 150, 17, 115, 190, 220, 65, 3, 191, 174, 102, 28, 190, 219, 53, 241, 58, 84, 244, 138, 187, 4, 96, 23, 189, 156, 67, 52, 190, 250, 160, 93, 188, 133, 28, 107, 190, 138, 80, 150, 189, 81, 64, 72, 61, 136, 143, 149, 190, 92, 107, 54, 190, 184, 123, 183, 62, 53, 126, 84, 61, 208, 224, 177, 189, 224, 87, 130, 62, 211, 66, 6, 191, 39, 155, 237, 189, 214, 129, 134, 190, 178, 243, 196, 62, 147, 60, 203, 190, 27, 157, 166, 190, 72, 57, 137, 62, 62, 191, 237, 190, 18, 167, 0, 191, 58, 6, 212, 61, 75, 219, 149, 61, 167, 28, 139, 190, 140, 231, 86, 62, 136, 197, 52, 190, 107, 129, 111, 190, 105, 82, 4, 61, 94, 246, 160, 61, 207, 86, 37, 62, 20, 98, 28, 190, 128, 155, 128, 61, 136, 240, 53, 62, 170, 137, 128, 62, 218, 76, 164, 60, 230, 50, 93, 189, 36, 147, 75, 190, 62, 249, 129, 62, 189, 168, 186, 189, 209, 122, 247, 61, 5, 191, 4, 189, 122, 55, 251, 61, 71, 1, 125, 190, 220, 24, 140, 61, 192, 237, 159, 61, 247, 52, 178, 61, 195, 214, 195, 61, 248, 186, 11, 62, 74, 146, 133, 61, 228, 84, 168, 189, 60, 125, 173, 61, 98, 204, 222, 60, 42, 110, 70, 62};
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
                alignas(float) const unsigned char memory[] = {253, 102, 188, 61, 206, 133, 66, 62, 39, 126, 62, 62, 40, 238, 45, 190, 124, 7, 86, 62, 150, 113, 32, 62, 37, 53, 150, 62, 176, 148, 68, 61, 255, 9, 127, 62, 179, 169, 142, 62, 97, 210, 176, 61, 177, 143, 196, 61, 82, 182, 154, 60, 125, 158, 59, 62, 130, 231, 247, 188, 207, 206, 90, 189, 75, 61, 12, 190, 215, 70, 89, 190, 70, 227, 173, 188, 254, 133, 170, 60, 224, 101, 242, 188, 204, 201, 226, 189, 110, 130, 170, 190, 172, 130, 219, 189, 144, 149, 171, 189, 234, 101, 163, 189, 39, 97, 44, 189, 227, 167, 225, 61, 194, 118, 20, 188, 157, 224, 156, 189, 158, 23, 222, 61, 91, 27, 178, 62};
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
                alignas(float) const unsigned char memory[] = {42, 106, 144, 188, 124, 242, 161, 190, 163, 38, 2, 63, 129, 55, 101, 61, 105, 199, 84, 190, 238, 146, 59, 190, 50, 143, 76, 191, 214, 161, 92, 63, 192, 111, 241, 190, 204, 254, 42, 63, 172, 183, 67, 62, 135, 69, 137, 61, 49, 101, 145, 61, 30, 27, 37, 191, 96, 200, 16, 191, 129, 48, 246, 62, 86, 79, 251, 61, 114, 23, 93, 61, 208, 208, 173, 190, 212, 9, 76, 187, 93, 105, 63, 61, 211, 205, 80, 62, 230, 93, 75, 191, 7, 134, 167, 62, 21, 23, 7, 62, 69, 108, 214, 62, 158, 23, 63, 189, 248, 102, 72, 63, 254, 106, 81, 63, 72, 11, 203, 189, 178, 207, 134, 191, 3, 95, 46, 190, 167, 180, 67, 190, 69, 42, 79, 190, 6, 57, 135, 60, 63, 76, 28, 189, 2, 73, 167, 190, 54, 226, 1, 59, 157, 183, 149, 61, 167, 166, 70, 62, 246, 229, 83, 190, 80, 118, 182, 189, 218, 137, 193, 190, 26, 56, 49, 190, 23, 251, 125, 61, 214, 25, 26, 62, 4, 5, 2, 63, 131, 158, 207, 61, 136, 58, 25, 62, 28, 161, 29, 62, 108, 154, 38, 62, 85, 208, 116, 189, 116, 13, 8, 62, 11, 161, 189, 61, 225, 131, 227, 62, 58, 33, 140, 61, 149, 131, 172, 189, 240, 35, 153, 59, 230, 251, 168, 61, 154, 234, 242, 61, 41, 187, 215, 61, 118, 21, 175, 189, 52, 150, 163, 62, 145, 97, 86, 190};
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
                alignas(float) const unsigned char memory[] = {138, 24, 73, 190, 69, 223, 167, 190};
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
    alignas(float) const unsigned char memory[] = {103, 41, 103, 63, 123, 32, 109, 190, 120, 47, 104, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {20, 153, 211, 189, 226, 174, 240, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0005/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}