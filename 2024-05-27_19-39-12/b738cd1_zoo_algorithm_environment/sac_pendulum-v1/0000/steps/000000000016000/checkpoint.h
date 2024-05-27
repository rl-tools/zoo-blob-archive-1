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
                alignas(float) const unsigned char memory[] = {233, 182, 200, 190, 181, 46, 146, 62, 175, 247, 120, 188, 0, 231, 80, 191, 230, 74, 229, 190, 55, 133, 22, 63, 204, 49, 22, 63, 191, 228, 41, 191, 101, 107, 22, 190, 241, 125, 218, 190, 26, 103, 203, 191, 40, 215, 1, 190, 193, 147, 60, 190, 182, 39, 72, 191, 242, 227, 47, 191, 37, 37, 100, 62, 250, 184, 193, 62, 24, 160, 35, 63, 247, 34, 49, 62, 165, 16, 138, 190, 99, 1, 241, 62, 135, 78, 28, 63, 127, 108, 61, 63, 171, 124, 152, 62, 84, 187, 233, 190, 150, 13, 67, 62, 144, 173, 41, 191, 201, 238, 84, 62, 247, 108, 123, 63, 92, 217, 209, 190, 28, 33, 51, 63, 124, 235, 138, 63, 16, 255, 126, 62, 228, 131, 57, 191, 222, 96, 209, 63, 255, 58, 169, 62, 12, 3, 213, 62, 168, 1, 40, 63, 176, 29, 123, 61, 248, 209, 80, 63, 92, 164, 40, 191, 77, 133, 162, 190, 97, 187, 89, 62, 248, 109, 34, 63, 91, 53, 11, 191, 106, 187, 174, 190, 51, 141, 133, 61, 130, 141, 130, 60, 46, 158, 231, 62, 207, 69, 130, 191, 163, 186, 213, 190, 12, 186, 60, 191, 62, 133, 153, 62, 132, 227, 50, 190, 201, 35, 54, 63, 78, 241, 52, 189, 102, 161, 241, 189, 196, 156, 10, 191, 152, 120, 69, 63, 13, 115, 67, 61, 201, 209, 19, 191, 37, 73, 52, 62, 199, 208, 151, 62, 176, 81, 148, 62, 45, 82, 1, 63, 37, 0, 53, 61, 226, 59, 192, 62, 74, 56, 254, 190, 88, 41, 8, 61, 131, 164, 157, 61, 105, 60, 55, 63, 110, 196, 185, 62, 40, 46, 11, 63, 65, 142, 121, 191, 123, 4, 106, 190, 250, 249, 190, 62, 154, 207, 98, 191, 127, 163, 182, 190, 221, 28, 211, 189, 52, 97, 65, 62, 123, 73, 16, 191, 190, 185, 228, 62, 15, 54, 94, 63, 238, 128, 72, 62, 224, 35, 80, 62, 215, 186, 20, 191, 171, 214, 15, 63, 86, 132, 190, 190, 25, 210, 100, 188, 159, 137, 199, 190, 107, 35, 170, 190, 22, 150, 7, 191, 218, 168, 130, 56, 224, 36, 42, 63, 237, 235, 197, 62, 114, 152, 142, 190};
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
                alignas(float) const unsigned char memory[] = {115, 120, 27, 191, 159, 123, 17, 61, 225, 58, 142, 62, 87, 212, 217, 62, 156, 234, 198, 190, 65, 130, 60, 60, 186, 16, 176, 62, 58, 53, 199, 190, 255, 76, 4, 191, 154, 69, 67, 62, 109, 181, 7, 190, 195, 250, 198, 189, 132, 18, 192, 189, 38, 101, 49, 191, 228, 250, 213, 61, 49, 2, 175, 62, 22, 98, 46, 62, 49, 194, 122, 62, 219, 89, 144, 190, 123, 106, 8, 63, 214, 94, 198, 62, 74, 62, 31, 63, 88, 137, 233, 62, 79, 237, 33, 191, 161, 177, 26, 190, 29, 59, 242, 189, 97, 37, 246, 190, 95, 247, 206, 189, 166, 66, 79, 62, 176, 92, 34, 191, 52, 144, 32, 191, 19, 202, 55, 191};
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
                alignas(float) const unsigned char memory[] = {162, 32, 81, 189, 102, 229, 137, 62, 27, 74, 60, 62, 129, 121, 176, 61, 131, 53, 131, 189, 164, 226, 79, 190, 88, 189, 187, 61, 94, 120, 213, 190, 167, 243, 38, 191, 34, 6, 179, 190, 75, 248, 168, 188, 245, 80, 18, 63, 134, 103, 141, 190, 102, 217, 98, 62, 118, 75, 222, 189, 51, 175, 167, 62, 219, 203, 18, 190, 131, 57, 48, 61, 67, 181, 15, 62, 220, 140, 173, 62, 184, 42, 143, 62, 225, 30, 230, 61, 59, 224, 39, 62, 32, 223, 163, 190, 209, 200, 253, 61, 179, 85, 111, 59, 236, 75, 27, 189, 32, 118, 156, 190, 177, 200, 82, 190, 153, 139, 159, 61, 122, 227, 205, 62, 74, 238, 238, 190, 74, 74, 32, 189, 198, 133, 9, 190, 244, 18, 96, 190, 100, 115, 100, 61, 207, 193, 207, 189, 176, 179, 13, 190, 147, 81, 213, 61, 236, 66, 55, 189, 160, 87, 22, 190, 233, 98, 248, 61, 236, 0, 41, 190, 79, 65, 6, 190, 164, 164, 31, 190, 181, 249, 183, 189, 118, 194, 234, 189, 248, 206, 71, 190, 83, 136, 188, 60, 142, 211, 161, 189, 226, 255, 119, 189, 89, 84, 15, 189, 67, 203, 134, 61, 89, 124, 11, 62, 192, 87, 89, 188, 112, 198, 235, 189, 36, 193, 249, 59, 27, 67, 147, 61, 216, 85, 222, 189, 225, 60, 225, 61, 21, 88, 59, 189, 54, 244, 168, 188, 180, 34, 176, 188, 168, 230, 207, 61, 31, 255, 252, 188, 86, 231, 138, 61, 217, 198, 117, 62, 148, 243, 137, 61, 156, 7, 187, 60, 127, 210, 241, 189, 83, 180, 253, 189, 31, 161, 62, 190, 113, 69, 92, 61, 120, 61, 62, 62, 2, 227, 76, 190, 226, 220, 210, 189, 173, 119, 110, 190, 222, 207, 146, 190, 53, 103, 176, 189, 35, 131, 12, 188, 57, 138, 217, 61, 211, 70, 156, 189, 255, 223, 125, 61, 163, 229, 218, 61, 66, 56, 93, 61, 207, 35, 22, 62, 126, 96, 113, 61, 7, 69, 87, 60, 54, 131, 197, 190, 132, 16, 139, 61, 145, 14, 254, 189, 126, 169, 113, 190, 133, 188, 137, 190, 120, 129, 60, 189, 133, 11, 200, 60, 18, 23, 10, 62, 100, 7, 246, 189, 21, 171, 132, 62, 195, 99, 203, 62, 67, 97, 134, 62, 114, 200, 146, 190, 18, 156, 133, 190, 49, 77, 148, 61, 114, 122, 85, 190, 175, 57, 15, 191, 210, 173, 83, 61, 114, 167, 80, 190, 84, 50, 28, 190, 109, 135, 239, 189, 194, 44, 87, 190, 213, 12, 108, 62, 162, 106, 17, 62, 105, 204, 135, 189, 187, 76, 149, 190, 70, 35, 214, 62, 57, 129, 93, 190, 116, 210, 24, 61, 172, 82, 115, 62, 238, 88, 54, 188, 109, 111, 220, 190, 231, 177, 139, 62, 5, 102, 28, 62, 185, 88, 182, 189, 104, 236, 128, 190, 110, 38, 255, 187, 230, 1, 134, 190, 50, 240, 229, 61, 72, 204, 144, 62, 252, 20, 217, 61, 100, 134, 60, 190, 249, 32, 182, 59, 113, 67, 228, 62, 112, 205, 33, 62, 2, 132, 150, 62, 141, 19, 124, 61, 201, 209, 50, 61, 247, 223, 46, 61, 234, 86, 32, 62, 60, 115, 236, 62, 172, 135, 19, 191, 42, 41, 52, 189, 134, 18, 201, 61, 31, 179, 141, 190, 77, 225, 125, 61, 28, 210, 44, 62, 125, 114, 155, 189, 230, 57, 51, 61, 108, 126, 210, 190, 169, 226, 228, 189, 140, 106, 80, 60, 249, 71, 146, 62, 165, 36, 114, 62, 135, 41, 211, 189, 116, 147, 28, 190, 128, 180, 3, 190, 137, 212, 79, 62, 201, 210, 207, 62, 162, 116, 139, 61, 232, 233, 60, 190, 218, 13, 150, 61, 104, 78, 122, 189, 213, 157, 56, 190, 57, 84, 32, 190, 88, 73, 25, 188, 171, 125, 117, 60, 14, 29, 173, 61, 5, 199, 36, 61, 150, 89, 165, 61, 137, 212, 234, 187, 122, 13, 199, 188, 119, 12, 43, 190, 119, 118, 105, 60, 88, 49, 3, 190, 41, 241, 207, 189, 35, 226, 56, 60, 16, 208, 59, 190, 106, 126, 40, 61, 213, 89, 81, 189, 145, 248, 167, 187, 10, 33, 225, 59, 203, 30, 196, 189, 126, 214, 125, 61, 184, 58, 45, 190, 148, 249, 16, 190, 218, 169, 95, 189, 219, 160, 165, 61, 124, 136, 110, 61, 178, 0, 41, 60, 255, 61, 145, 61, 36, 215, 225, 189, 240, 139, 46, 190, 208, 114, 6, 189, 246, 146, 190, 59, 5, 147, 94, 189, 87, 89, 87, 189, 161, 54, 162, 62, 2, 197, 105, 190, 204, 155, 116, 191, 118, 208, 222, 190, 243, 58, 23, 191, 229, 18, 162, 190, 239, 123, 210, 190, 62, 175, 118, 191, 147, 245, 141, 189, 37, 133, 72, 191, 157, 144, 254, 61, 116, 247, 38, 61, 164, 109, 33, 62, 162, 92, 129, 190, 166, 74, 178, 62, 201, 244, 8, 62, 100, 78, 109, 62, 43, 79, 101, 62, 178, 56, 227, 61, 120, 191, 130, 190, 25, 99, 126, 190, 174, 180, 116, 62, 45, 18, 160, 188, 59, 114, 23, 189, 210, 62, 148, 189, 204, 95, 159, 191, 4, 87, 163, 61, 85, 190, 47, 62, 187, 232, 87, 190, 176, 173, 241, 61, 196, 208, 75, 191, 84, 169, 68, 190, 99, 50, 6, 191, 224, 100, 135, 61, 50, 152, 24, 189, 135, 30, 185, 190, 126, 54, 77, 62, 125, 11, 85, 62, 176, 215, 21, 63, 89, 175, 128, 62, 125, 208, 250, 190, 253, 234, 14, 63, 50, 179, 124, 191, 87, 115, 154, 190, 173, 236, 196, 61, 233, 211, 59, 61, 90, 239, 185, 61, 108, 251, 134, 61, 229, 249, 174, 62, 25, 215, 57, 61, 106, 242, 128, 62, 214, 43, 127, 189, 98, 25, 142, 190, 69, 230, 162, 191, 153, 67, 22, 191, 147, 95, 162, 190, 241, 163, 243, 61, 140, 11, 137, 188, 128, 84, 3, 190, 26, 40, 166, 190, 84, 236, 174, 188, 48, 185, 50, 190, 231, 145, 245, 60, 154, 19, 214, 59, 48, 209, 28, 190, 199, 1, 127, 60, 156, 175, 31, 189, 152, 195, 205, 189, 109, 108, 37, 189, 5, 183, 55, 61, 117, 85, 102, 61, 82, 144, 151, 61, 63, 243, 95, 60, 122, 22, 159, 189, 98, 194, 228, 61, 158, 126, 57, 189, 129, 192, 134, 61, 206, 115, 137, 189, 154, 162, 49, 190, 210, 112, 15, 190, 225, 211, 242, 59, 58, 194, 199, 61, 220, 62, 202, 189, 155, 1, 33, 190, 96, 114, 27, 190, 234, 252, 245, 189, 177, 5, 162, 61, 193, 248, 146, 189, 1, 179, 34, 190, 59, 146, 0, 188, 15, 37, 120, 188, 62, 146, 231, 59, 150, 251, 154, 188, 195, 127, 63, 189, 147, 232, 207, 61, 23, 3, 159, 60, 199, 144, 208, 188, 35, 112, 43, 61, 25, 124, 116, 189, 38, 172, 63, 190, 61, 69, 48, 62, 94, 48, 230, 59, 77, 226, 48, 190, 155, 244, 0, 62, 190, 168, 42, 190, 130, 150, 12, 189, 141, 66, 195, 188, 46, 17, 77, 60, 72, 216, 111, 61, 74, 137, 24, 61, 26, 211, 87, 188, 169, 64, 26, 190, 162, 179, 15, 190, 51, 189, 255, 61, 238, 217, 244, 189, 245, 175, 173, 189, 120, 69, 37, 61, 223, 157, 146, 58, 132, 99, 32, 190, 192, 226, 184, 59, 57, 96, 36, 62, 72, 121, 83, 189, 163, 168, 217, 61, 192, 124, 245, 61, 87, 233, 166, 189, 133, 164, 68, 189, 194, 2, 96, 62, 83, 114, 95, 62, 253, 117, 102, 189, 141, 159, 56, 190, 50, 206, 21, 61, 60, 165, 219, 61, 17, 24, 65, 189, 101, 114, 14, 60, 121, 164, 50, 62, 156, 59, 175, 189, 98, 177, 220, 190, 187, 118, 14, 62, 120, 108, 149, 191, 53, 242, 243, 60, 168, 8, 54, 61, 45, 177, 67, 190, 18, 217, 4, 190, 67, 224, 20, 190, 72, 221, 10, 62, 56, 42, 7, 62, 44, 47, 254, 61, 36, 28, 93, 62, 125, 98, 114, 190, 63, 239, 77, 191, 174, 227, 157, 190, 95, 188, 108, 62, 48, 248, 142, 62, 80, 241, 90, 61, 179, 226, 151, 188, 113, 30, 81, 62, 161, 11, 183, 62, 30, 129, 119, 61, 91, 254, 99, 62, 40, 14, 188, 62, 46, 37, 51, 189, 141, 105, 244, 190, 91, 139, 132, 190, 93, 204, 100, 62, 58, 55, 206, 190, 193, 88, 5, 191, 216, 24, 123, 190, 81, 127, 149, 190, 158, 197, 176, 190, 148, 213, 202, 190, 220, 244, 26, 62, 163, 24, 148, 62, 219, 31, 233, 189, 228, 174, 103, 190, 200, 223, 25, 190, 183, 249, 37, 62, 35, 206, 52, 189, 103, 83, 3, 188, 48, 96, 111, 62, 217, 254, 152, 62, 23, 39, 2, 191, 52, 21, 165, 62, 183, 74, 104, 62, 186, 156, 198, 61, 114, 166, 174, 190, 85, 182, 238, 189, 101, 23, 86, 190, 94, 138, 243, 62, 52, 113, 201, 189, 239, 205, 51, 62, 84, 230, 107, 62, 90, 155, 249, 61, 99, 49, 75, 190, 203, 20, 148, 60, 118, 211, 123, 190, 181, 176, 18, 62, 138, 52, 179, 190, 111, 66, 122, 61, 125, 79, 189, 61, 232, 115, 138, 190, 243, 238, 63, 190, 0, 230, 217, 190, 187, 79, 93, 62, 178, 79, 65, 189, 175, 220, 222, 188, 9, 11, 52, 190, 107, 6, 127, 61, 3, 42, 114, 62, 160, 41, 209, 189, 115, 143, 212, 60, 138, 14, 72, 62, 230, 184, 229, 61, 143, 58, 160, 189, 89, 79, 215, 62, 109, 26, 34, 62, 157, 1, 2, 62, 7, 123, 191, 189, 226, 224, 155, 187, 35, 182, 152, 61, 91, 241, 88, 61, 23, 101, 11, 62, 40, 218, 21, 189, 90, 33, 192, 189, 2, 159, 36, 190, 206, 153, 50, 189, 144, 105, 140, 189, 28, 234, 158, 189, 226, 106, 17, 190, 121, 56, 206, 189, 239, 241, 111, 61, 158, 68, 252, 188, 90, 122, 116, 61, 247, 22, 9, 62, 53, 78, 190, 189, 108, 154, 76, 61, 199, 235, 2, 190, 166, 62, 130, 189, 202, 124, 78, 190, 84, 64, 106, 189, 58, 84, 195, 189, 209, 142, 161, 61, 159, 59, 243, 187, 177, 33, 63, 190, 140, 3, 185, 189, 162, 191, 92, 61, 196, 147, 16, 189, 166, 74, 35, 190, 75, 20, 238, 61, 34, 187, 9, 190, 22, 62, 213, 61, 137, 191, 227, 61, 234, 27, 238, 189, 131, 161, 35, 188, 11, 219, 92, 189, 242, 158, 173, 189, 20, 101, 243, 186, 204, 172, 192, 61, 212, 190, 226, 61, 244, 66, 147, 61, 141, 26, 147, 189, 209, 236, 201, 61, 50, 125, 33, 61, 55, 147, 43, 190, 87, 93, 46, 190, 52, 187, 13, 190, 46, 96, 193, 61, 137, 17, 37, 190, 181, 207, 126, 59, 50, 28, 12, 62, 75, 217, 224, 189, 96, 92, 249, 189, 241, 204, 20, 190, 170, 206, 69, 61, 26, 27, 111, 61, 0, 154, 86, 188, 39, 123, 190, 189, 92, 121, 136, 61, 207, 136, 68, 189, 166, 190, 228, 189, 119, 197, 192, 189, 152, 109, 252, 188, 128, 30, 155, 188, 139, 104, 254, 61, 204, 171, 40, 62, 136, 176, 160, 188, 174, 97, 195, 57, 128, 9, 246, 189, 90, 183, 42, 62, 200, 82, 7, 191, 16, 217, 191, 188, 3, 175, 162, 189, 14, 82, 125, 62, 178, 30, 241, 190, 29, 180, 121, 190, 44, 112, 55, 190, 24, 46, 146, 190, 103, 101, 52, 62, 74, 152, 228, 190, 251, 235, 238, 62, 30, 11, 113, 61, 123, 7, 129, 190, 127, 190, 143, 61, 215, 10, 16, 61, 195, 144, 7, 63, 164, 154, 128, 61, 217, 183, 182, 61, 110, 4, 254, 61, 59, 193, 29, 61, 131, 229, 15, 188, 23, 174, 242, 61, 225, 18, 101, 62, 125, 232, 110, 62, 46, 163, 58, 191, 64, 76, 146, 189, 184, 83, 189, 188, 10, 108, 236, 60, 185, 76, 142, 62, 153, 84, 17, 190, 193, 73, 225, 189, 9, 46, 93, 62, 70, 184, 26, 62, 210, 175, 195, 190, 252, 157, 137, 190, 134, 159, 61, 58, 236, 196, 197, 190, 196, 133, 27, 191, 211, 214, 119, 190, 27, 203, 89, 190, 183, 201, 242, 190, 68, 10, 148, 190, 80, 130, 61, 189, 121, 35, 192, 190, 153, 76, 42, 189, 117, 212, 63, 61, 232, 157, 102, 190, 74, 53, 160, 190, 82, 166, 123, 189, 8, 127, 151, 189, 45, 137, 21, 190, 16, 136, 203, 188, 187, 23, 21, 191, 95, 10, 140, 62, 79, 242, 42, 61, 174, 240, 17, 191, 117, 165, 116, 190, 226, 215, 109, 61, 2, 172, 135, 190, 67, 13, 79, 61, 4, 145, 162, 190, 13, 174, 87, 187, 222, 150, 243, 61, 147, 206, 203, 62, 147, 80, 21, 63, 224, 99, 227, 190, 89, 44, 104, 190, 183, 27, 156, 62, 162, 75, 77, 191, 9, 32, 114, 191, 120, 204, 208, 190, 78, 18, 231, 190, 96, 126, 7, 62, 9, 234, 122, 191, 107, 27, 113, 189, 149, 76, 47, 62, 101, 88, 78, 62, 19, 235, 210, 190, 69, 81, 186, 62, 251, 234, 136, 189, 58, 79, 1, 62, 140, 68, 198, 61, 169, 232, 140, 61, 77, 104, 121, 61, 176, 2, 251, 190, 26, 179, 83, 62, 47, 209, 173, 189, 121, 145, 184, 189, 185, 85, 13, 191, 99, 95, 12, 190, 173, 228, 35, 188, 253, 191, 221, 62, 49, 198, 206, 189, 72, 77, 154, 187, 37, 82, 174, 60, 34, 205, 169, 62, 27, 252, 231, 61, 99, 39, 193, 190, 233, 165, 202, 60, 31, 116, 141, 61, 214, 133, 212, 190, 94, 232, 41, 191, 185, 88, 56, 191, 127, 218, 14, 190, 126, 250, 217, 62, 132, 131, 222, 189, 136, 225, 234, 60, 79, 188, 182, 190, 145, 195, 64, 62, 136, 198, 167, 191, 70, 170, 223, 62, 5, 68, 120, 190, 188, 192, 32, 63, 55, 17, 73, 62, 125, 152, 139, 62, 19, 236, 63, 190, 103, 58, 67, 190, 81, 212, 197, 62, 176, 21, 176, 191, 166, 253, 244, 189, 53, 65, 141, 190, 246, 94, 201, 61, 121, 232, 142, 61, 67, 207, 64, 190, 231, 1, 43, 190, 162, 13, 113, 187, 217, 36, 70, 190, 15, 5, 166, 62, 152, 154, 167, 62, 94, 218, 188, 188, 27, 76, 18, 190, 116, 89, 194, 61, 100, 160, 130, 190, 29, 187, 29, 60, 28, 71, 67, 62, 61, 113, 39, 189, 239, 174, 221, 188, 153, 21, 133, 187, 233, 88, 104, 190, 35, 142, 170, 189, 176, 161, 36, 62, 11, 64, 214, 61, 152, 112, 161, 188, 157, 142, 140, 57, 210, 44, 58, 62, 94, 141, 25, 62, 18, 103, 53, 62, 110, 125, 58, 62, 106, 99, 15, 62, 190, 166, 137, 190, 129, 190, 213, 189, 1, 238, 54, 190, 159, 193, 59, 190, 165, 10, 72, 61, 192, 182, 138, 60, 111, 64, 29, 62, 103, 124, 75, 62, 46, 111, 138, 61, 251, 226, 160, 60, 195, 193, 159, 190, 59, 161, 59, 62, 228, 220, 42, 62, 99, 231, 156, 61, 114, 218, 1, 62, 97, 123, 141, 188, 23, 51, 115, 190, 24, 26, 21, 190, 63, 176, 201, 190, 111, 40, 94, 62, 75, 246, 165, 189, 53, 206, 155, 62, 122, 89, 6, 60, 161, 83, 32, 62, 171, 106, 15, 62, 14, 115, 187, 189, 217, 69, 18, 63, 98, 132, 131, 189, 162, 43, 71, 62, 167, 237, 142, 190, 210, 113, 235, 188, 12, 74, 141, 61, 158, 46, 234, 62, 14, 55, 26, 62, 3, 57, 135, 187, 35, 85, 83, 189, 141, 42, 231, 188, 52, 250, 67, 62, 210, 39, 27, 61, 169, 82, 61, 62, 186, 55, 121, 189, 200, 75, 241, 190, 18, 170, 192, 61, 77, 96, 119, 189, 85, 37, 248, 189, 213, 54, 20, 191, 184, 199, 17, 191, 76, 36, 35, 190, 43, 148, 2, 62, 171, 146, 156, 62, 243, 11, 218, 61, 138, 144, 139, 190, 154, 138, 71, 62, 190, 223, 249, 188, 65, 155, 23, 60, 172, 163, 187, 60, 77, 254, 165, 61, 46, 19, 208, 61, 109, 179, 145, 62, 116, 25, 41, 190, 32, 111, 173, 190, 194, 183, 190, 61, 228, 57, 50, 62, 120, 34, 39, 191, 72, 128, 84, 190, 105, 90, 76, 62, 190, 43, 93, 61, 228, 223, 108, 189, 44, 62, 191, 190, 222, 142, 26, 189, 51, 172, 59, 62, 99, 224, 233, 62, 151, 178, 26, 190, 151, 32, 25, 189, 19, 59, 35, 189, 51, 247, 113, 189, 50, 5, 204, 188, 16, 168, 108, 61, 0, 198, 231, 61, 107, 27, 180, 189, 183, 149, 36, 190, 88, 7, 34, 190, 79, 78, 46, 190, 184, 228, 12, 62, 210, 186, 66, 189, 24, 118, 237, 189, 133, 70, 20, 62, 8, 185, 182, 61, 3, 126, 2, 190, 185, 152, 60, 190, 157, 195, 215, 189, 167, 85, 173, 189, 156, 193, 22, 188, 99, 231, 94, 189, 138, 146, 147, 186, 12, 255, 50, 189, 181, 162, 88, 189, 207, 127, 116, 189, 65, 96, 76, 60, 181, 110, 46, 189, 61, 22, 34, 190, 126, 141, 11, 61, 251, 55, 51, 62, 198, 100, 54, 61, 140, 231, 252, 61, 77, 139, 227, 189, 50, 151, 238, 59, 248, 28, 171, 190, 242, 143, 137, 189, 40, 32, 62, 191, 6, 70, 142, 190, 186, 241, 5, 191, 51, 222, 53, 62, 119, 126, 69, 62, 99, 236, 67, 191, 43, 19, 52, 191, 34, 152, 25, 191, 69, 177, 91, 62, 68, 72, 239, 61, 194, 8, 208, 189, 96, 255, 251, 188, 93, 57, 33, 62, 105, 193, 219, 62, 159, 192, 171, 189, 90, 89, 45, 191, 26, 226, 7, 190, 53, 190, 200, 190, 128, 157, 130, 188, 41, 176, 218, 61, 245, 51, 169, 61, 197, 49, 156, 60, 44, 39, 85, 191, 230, 104, 23, 191, 126, 81, 66, 62, 159, 38, 22, 190, 106, 240, 117, 62, 55, 6, 115, 188, 75, 73, 70, 189, 137, 73, 1, 190, 39, 37, 173, 61, 215, 90, 112, 61, 24, 229, 55, 190, 193, 155, 202, 61, 10, 71, 139, 60, 207, 7, 153, 189, 73, 149, 139, 189, 207, 0, 124, 189, 178, 190, 219, 187, 216, 88, 202, 61, 141, 170, 247, 61, 230, 32, 194, 189, 145, 130, 198, 188, 236, 125, 11, 189, 43, 57, 61, 190, 73, 15, 23, 190, 73, 102, 234, 189, 232, 68, 167, 60, 235, 123, 220, 61, 117, 232, 26, 189, 37, 10, 234, 61, 202, 196, 152, 189, 152, 165, 231, 189, 42, 83, 78, 189, 133, 193, 23, 62, 71, 126, 136, 60, 81, 166, 61, 189, 113, 223, 151, 188, 59, 30, 57, 61, 202, 200, 69, 189, 85, 255, 211, 190, 181, 106, 72, 62, 99, 171, 114, 62, 47, 150, 132, 61, 185, 191, 54, 61, 89, 242, 135, 190, 39, 82, 118, 190, 169, 165, 48, 61, 50, 127, 69, 62, 251, 60, 202, 61, 246, 173, 186, 189, 153, 80, 41, 62, 192, 223, 191, 190, 94, 98, 106, 61, 203, 67, 146, 189, 182, 193, 56, 62, 63, 61, 121, 60, 40, 143, 62, 189, 65, 108, 202, 61, 107, 24, 128, 189, 191, 242, 116, 62, 141, 26, 84, 62, 255, 1, 160, 57, 53, 89, 36, 190, 253, 29, 79, 188, 53, 4, 36, 190, 222, 63, 173, 187, 249, 241, 214, 60, 115, 184, 28, 190, 247, 141, 20, 62, 148, 31, 92, 189, 12, 132, 158, 189, 230, 213, 194, 189, 18, 45, 79, 190, 16, 148, 218, 190, 122, 15, 14, 61, 26, 173, 137, 62, 134, 254, 188, 189, 201, 228, 208, 61, 72, 16, 247, 61, 11, 156, 168, 62, 233, 235, 144, 62, 42, 208, 55, 191, 39, 171, 19, 62, 241, 25, 35, 191, 50, 211, 164, 189, 85, 226, 255, 189, 110, 68, 157, 190, 198, 45, 144, 62, 150, 13, 212, 189, 116, 115, 188, 189, 135, 241, 65, 189, 112, 54, 16, 62, 136, 5, 165, 61, 142, 62, 10, 62, 112, 63, 101, 191, 49, 206, 0, 191, 39, 53, 6, 61, 120, 191, 16, 62, 114, 55, 19, 62, 27, 129, 146, 190, 173, 147, 38, 190, 219, 224, 12, 61, 199, 148, 181, 60, 20, 77, 188, 191, 217, 203, 5, 190, 135, 81, 52, 63, 154, 190, 159, 61, 90, 78, 62, 62, 173, 27, 49, 191, 43, 57, 199, 60, 14, 4, 36, 62, 230, 119, 50, 189, 8, 63, 59, 62, 28, 131, 161, 191, 174, 117, 146, 62, 245, 98, 61, 190, 199, 15, 51, 186, 160, 206, 131, 61, 133, 150, 100, 189, 11, 92, 50, 62, 167, 136, 166, 190, 161, 185, 162, 61, 79, 139, 193, 190, 179, 33, 199, 189, 114, 137, 208, 61, 249, 77, 63, 63, 157, 13, 221, 190, 47, 170, 98, 190, 47, 57, 9, 61, 33, 225, 169, 62, 237, 61, 44, 62, 117, 80, 220, 189, 222, 223, 21, 190, 45, 173, 164, 189, 20, 42, 212, 189, 41, 108, 225, 60, 137, 227, 142, 62, 69, 142, 59, 191, 51, 76, 18, 61, 173, 47, 179, 188, 126, 158, 36, 62, 255, 118, 225, 190, 185, 204, 159, 190, 145, 190, 26, 61, 194, 26, 119, 189, 7, 124, 10, 63, 67, 74, 170, 190, 49, 111, 253, 62, 217, 89, 182, 188, 199, 125, 242, 61, 185, 176, 89, 60, 208, 101, 24, 190, 125, 73, 132, 62, 178, 28, 173, 61, 170, 134, 177, 62, 236, 234, 198, 61, 231, 198, 221, 189, 129, 178, 229, 61, 202, 130, 206, 62, 213, 33, 12, 60, 95, 148, 83, 62, 229, 220, 119, 190, 185, 142, 143, 190, 20, 60, 118, 189, 235, 6, 238, 61, 226, 36, 194, 62, 252, 109, 52, 61, 211, 150, 129, 62, 46, 96, 17, 62, 62, 35, 20, 191, 212, 221, 71, 190, 153, 32, 132, 190, 196, 180, 176, 61, 109, 73, 143, 190, 221, 163, 102, 190, 32, 196, 215, 186, 152, 143, 200, 189, 214, 225, 9, 63, 127, 232, 204, 190, 124, 219, 16, 63, 178, 152, 95, 62, 191, 229, 212, 61, 66, 248, 108, 61, 76, 117, 183, 189, 77, 84, 129, 62, 196, 240, 177, 61, 197, 176, 157, 62, 125, 79, 67, 61, 107, 51, 92, 62, 45, 220, 199, 60, 106, 94, 130, 62, 55, 30, 121, 60, 84, 23, 168, 61, 178, 83, 66, 189, 233, 133, 154, 190, 226, 69, 121, 61, 165, 99, 84, 61, 112, 35, 224, 62, 217, 193, 169, 189, 142, 244, 98, 62, 224, 206, 226, 62, 216, 190, 133, 190, 144, 122, 201, 190, 213, 37, 113, 190, 38, 89, 89, 62, 90, 222, 25, 191, 62, 211, 122, 190, 190, 250, 153, 189, 99, 243, 78, 190, 114, 213, 199, 60, 36, 79, 251, 190, 35, 100, 218, 62, 41, 18, 5, 61, 12, 228, 85, 190, 116, 102, 105, 60, 142, 155, 186, 189, 234, 249, 106, 62, 181, 180, 166, 189, 128, 228, 14, 61, 250, 3, 163, 62, 40, 48, 91, 62, 236, 53, 149, 190, 244, 159, 220, 62, 220, 246, 53, 188, 34, 42, 188, 188, 254, 58, 223, 190, 225, 99, 104, 61, 54, 116, 154, 61, 64, 64, 142, 62, 50, 177, 165, 62, 36, 169, 254, 61, 129, 249, 82, 191, 216, 247, 75, 190, 248, 154, 17, 63, 144, 253, 135, 62, 29, 35, 137, 189, 150, 229, 103, 191, 165, 29, 233, 61, 15, 113, 214, 62, 216, 152, 142, 62, 34, 102, 13, 62, 113, 95, 212, 190, 128, 183, 40, 63, 136, 93, 106, 190, 213, 235, 196, 190, 85, 201, 24, 188, 179, 73, 104, 62, 59, 245, 36, 62, 194, 9, 243, 190, 164, 230, 229, 189, 106, 135, 23, 191, 63, 113, 52, 190, 210, 246, 159, 189, 217, 143, 45, 61, 174, 210, 206, 190, 132, 76, 9, 190, 189, 115, 91, 190, 80, 121, 59, 188, 249, 96, 84, 190, 100, 189, 179, 190, 192, 82, 64, 190, 152, 63, 149, 190};
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
                alignas(float) const unsigned char memory[] = {99, 24, 9, 61, 143, 161, 168, 189, 32, 161, 251, 61, 204, 49, 69, 62, 190, 200, 7, 62, 6, 99, 19, 190, 48, 15, 156, 61, 165, 49, 51, 62, 129, 33, 184, 188, 166, 86, 36, 190, 159, 204, 92, 61, 167, 228, 83, 62, 225, 121, 228, 59, 7, 118, 78, 189, 42, 178, 52, 190, 27, 212, 160, 190, 186, 139, 14, 61, 184, 66, 138, 62, 200, 198, 130, 62, 215, 99, 193, 62, 197, 177, 77, 190, 159, 225, 81, 62, 207, 190, 145, 189, 205, 232, 13, 190, 106, 145, 50, 190, 90, 82, 136, 62, 253, 4, 114, 62, 125, 118, 4, 62, 168, 233, 17, 62, 229, 114, 251, 61, 29, 80, 64, 189, 7, 37, 222, 61};
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
                alignas(float) const unsigned char memory[] = {54, 95, 174, 62, 33, 198, 184, 189, 138, 220, 95, 185, 231, 253, 186, 62, 140, 41, 161, 190, 202, 214, 195, 189, 154, 79, 154, 63, 92, 174, 142, 191, 79, 63, 0, 62, 148, 153, 203, 189, 208, 167, 206, 190, 35, 200, 19, 63, 188, 38, 142, 61, 136, 159, 36, 190, 158, 156, 32, 190, 101, 173, 219, 62, 132, 180, 7, 191, 93, 164, 149, 63, 202, 6, 108, 63, 23, 155, 38, 189, 116, 51, 32, 189, 126, 62, 57, 61, 199, 75, 9, 190, 25, 188, 166, 62, 148, 49, 181, 61, 99, 153, 66, 189, 161, 236, 52, 191, 165, 124, 71, 191, 75, 8, 173, 62, 159, 127, 142, 62, 218, 128, 222, 62, 207, 22, 36, 191, 109, 4, 43, 62, 157, 233, 91, 189, 254, 46, 45, 190, 151, 164, 177, 190, 192, 211, 156, 190, 34, 130, 173, 187, 146, 73, 163, 62, 67, 223, 248, 61, 40, 227, 44, 190, 21, 91, 161, 59, 118, 126, 212, 190, 64, 122, 193, 62, 89, 50, 152, 61, 254, 136, 53, 61, 209, 249, 30, 189, 237, 109, 16, 63, 173, 126, 212, 62, 139, 103, 139, 62, 207, 183, 164, 189, 34, 30, 194, 190, 205, 250, 148, 62, 120, 192, 250, 190, 62, 226, 46, 61, 157, 14, 80, 188, 21, 129, 49, 189, 198, 65, 161, 190, 245, 194, 138, 62, 244, 9, 80, 62, 238, 206, 19, 62, 175, 194, 193, 188, 57, 145, 217, 61, 186, 140, 232, 62};
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
                alignas(float) const unsigned char memory[] = {90, 19, 31, 190, 243, 219, 202, 190};
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
    alignas(float) const unsigned char memory[] = {190, 141, 21, 64, 162, 206, 106, 191, 252, 143, 1, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {250, 106, 126, 64, 235, 246, 183, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0000/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}