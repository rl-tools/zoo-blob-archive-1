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
                alignas(float) const unsigned char memory[] = {227, 210, 241, 61, 114, 125, 201, 190, 17, 97, 175, 188, 227, 114, 46, 63, 196, 80, 116, 190, 162, 162, 179, 62, 113, 233, 54, 191, 202, 233, 116, 63, 133, 116, 133, 189, 52, 193, 96, 190, 166, 221, 11, 63, 17, 136, 13, 60, 133, 76, 183, 61, 169, 35, 129, 63, 237, 205, 245, 61, 249, 18, 87, 191, 30, 175, 86, 63, 10, 243, 212, 188, 97, 234, 189, 190, 10, 90, 35, 63, 201, 124, 179, 61, 30, 131, 164, 190, 33, 161, 8, 63, 246, 13, 245, 62, 82, 61, 35, 63, 13, 27, 2, 63, 132, 176, 229, 62, 213, 103, 205, 190, 96, 100, 242, 62, 127, 240, 34, 63, 193, 175, 108, 62, 203, 215, 47, 62, 221, 238, 62, 63, 81, 60, 57, 189, 86, 220, 248, 62, 133, 10, 43, 63, 106, 107, 93, 62, 229, 103, 175, 63, 210, 132, 239, 62, 72, 203, 136, 191, 242, 129, 5, 191, 11, 36, 195, 189, 67, 238, 4, 63, 154, 168, 33, 191, 149, 32, 228, 189, 0, 147, 149, 62, 80, 19, 43, 62, 95, 106, 253, 190, 117, 174, 205, 189, 233, 194, 125, 190, 129, 176, 67, 62, 156, 126, 236, 190, 131, 97, 14, 191, 185, 220, 94, 191, 182, 85, 187, 62, 202, 54, 81, 63, 214, 102, 3, 63, 80, 59, 182, 62, 146, 112, 93, 190, 243, 43, 171, 190, 191, 70, 17, 191, 185, 34, 88, 191, 144, 129, 241, 188, 132, 35, 53, 63, 60, 177, 135, 63, 88, 47, 3, 63, 88, 97, 121, 63, 87, 6, 100, 191, 117, 143, 47, 62, 136, 177, 102, 188, 173, 40, 57, 63, 7, 139, 72, 63, 103, 199, 190, 189, 141, 187, 188, 188, 201, 97, 211, 190, 220, 139, 9, 191, 180, 170, 47, 62, 143, 92, 66, 191, 165, 241, 104, 62, 178, 196, 33, 61, 111, 229, 237, 187, 18, 194, 140, 189, 180, 165, 82, 62, 235, 163, 84, 61, 224, 218, 99, 191, 196, 254, 3, 62, 145, 112, 35, 189, 71, 137, 101, 62, 57, 240, 12, 191, 15, 144, 212, 62, 246, 136, 38, 191, 66, 134, 151, 191, 224, 37, 123, 190, 87, 146, 197, 62, 2, 141, 112, 190, 201, 177, 214, 62};
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
                alignas(float) const unsigned char memory[] = {254, 161, 19, 191, 112, 86, 12, 63, 175, 199, 29, 62, 5, 27, 225, 62, 195, 121, 48, 63, 176, 241, 215, 62, 149, 146, 0, 63, 13, 255, 171, 190, 17, 235, 80, 191, 239, 111, 1, 191, 18, 29, 207, 190, 56, 53, 157, 190, 115, 140, 71, 62, 156, 102, 83, 62, 71, 92, 12, 190, 11, 198, 77, 190, 164, 124, 97, 191, 87, 48, 154, 188, 147, 213, 17, 61, 43, 219, 182, 62, 116, 115, 4, 62, 217, 146, 36, 62, 228, 248, 194, 62, 246, 82, 174, 60, 37, 28, 120, 190, 132, 77, 148, 190, 24, 196, 205, 190, 224, 130, 35, 191, 128, 115, 168, 188, 230, 199, 205, 189, 245, 101, 19, 63, 40, 134, 170, 62};
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
                alignas(float) const unsigned char memory[] = {213, 108, 231, 189, 150, 34, 44, 63, 103, 79, 226, 187, 247, 23, 81, 62, 27, 219, 44, 190, 181, 41, 77, 190, 162, 248, 172, 190, 134, 250, 142, 190, 38, 31, 165, 188, 55, 156, 203, 188, 117, 9, 5, 62, 107, 248, 180, 190, 212, 223, 207, 189, 229, 91, 96, 59, 237, 145, 116, 62, 250, 101, 155, 62, 0, 75, 40, 59, 91, 105, 132, 61, 56, 184, 30, 190, 253, 33, 95, 62, 254, 135, 151, 61, 148, 223, 32, 60, 219, 27, 21, 62, 4, 53, 166, 190, 3, 51, 102, 62, 138, 14, 186, 61, 108, 206, 9, 62, 40, 106, 177, 189, 25, 216, 87, 189, 41, 138, 151, 61, 210, 121, 82, 61, 111, 250, 95, 62, 15, 229, 231, 188, 115, 118, 2, 59, 143, 128, 50, 190, 234, 246, 65, 189, 199, 151, 133, 190, 252, 182, 179, 189, 216, 216, 109, 190, 131, 203, 13, 62, 86, 55, 21, 61, 51, 152, 175, 61, 166, 17, 59, 62, 41, 120, 62, 62, 74, 79, 187, 188, 35, 154, 129, 190, 48, 141, 115, 190, 47, 255, 33, 190, 156, 71, 106, 62, 33, 0, 244, 60, 65, 85, 145, 61, 173, 1, 144, 189, 52, 117, 88, 190, 181, 107, 16, 190, 239, 140, 32, 61, 114, 245, 205, 61, 231, 84, 205, 61, 208, 165, 152, 189, 136, 162, 155, 189, 26, 161, 229, 61, 52, 162, 176, 190, 193, 80, 83, 62, 77, 212, 110, 190, 213, 106, 134, 61, 43, 151, 176, 61, 87, 83, 145, 188, 169, 132, 224, 189, 6, 70, 27, 190, 223, 29, 215, 189, 33, 255, 147, 189, 32, 254, 172, 189, 193, 181, 30, 190, 223, 127, 121, 61, 143, 92, 1, 190, 114, 139, 9, 190, 213, 254, 193, 189, 214, 158, 155, 60, 141, 198, 146, 60, 183, 201, 199, 189, 151, 179, 16, 190, 6, 37, 49, 62, 143, 141, 8, 190, 173, 100, 165, 189, 18, 105, 125, 188, 43, 228, 186, 189, 238, 84, 137, 188, 125, 70, 223, 60, 238, 109, 0, 190, 123, 223, 25, 189, 210, 135, 130, 61, 46, 194, 126, 189, 223, 142, 233, 61, 136, 165, 187, 61, 53, 30, 24, 190, 135, 163, 139, 61, 74, 49, 174, 61, 169, 125, 195, 60, 25, 43, 18, 63, 239, 76, 0, 61, 251, 190, 235, 62, 218, 48, 161, 62, 164, 60, 185, 60, 191, 33, 198, 62, 211, 206, 86, 191, 62, 48, 190, 62, 13, 46, 90, 191, 202, 185, 42, 61, 222, 23, 2, 191, 175, 121, 160, 190, 222, 27, 25, 190, 244, 76, 110, 191, 50, 221, 209, 189, 235, 6, 6, 61, 167, 124, 65, 62, 56, 147, 242, 62, 204, 43, 97, 190, 61, 8, 221, 189, 186, 244, 28, 63, 179, 70, 134, 190, 40, 220, 245, 190, 204, 93, 170, 190, 147, 139, 2, 189, 61, 193, 41, 189, 189, 172, 80, 187, 251, 160, 160, 62, 58, 244, 32, 62, 67, 174, 81, 62, 176, 149, 140, 190, 173, 43, 200, 186, 213, 32, 240, 62, 175, 101, 29, 62, 170, 228, 245, 61, 63, 73, 100, 62, 230, 36, 177, 189, 153, 188, 10, 189, 54, 14, 47, 190, 239, 153, 38, 190, 80, 248, 193, 190, 237, 144, 24, 190, 40, 55, 66, 190, 222, 150, 42, 62, 240, 157, 13, 189, 75, 99, 114, 61, 91, 162, 104, 190, 151, 138, 152, 190, 223, 16, 161, 62, 88, 222, 45, 62, 79, 17, 99, 60, 191, 106, 175, 60, 226, 46, 227, 61, 113, 106, 24, 62, 233, 10, 125, 187, 235, 96, 105, 190, 150, 93, 136, 62, 226, 60, 22, 190, 59, 252, 236, 61, 100, 230, 138, 187, 177, 71, 84, 190, 180, 178, 3, 190, 113, 193, 49, 190, 206, 236, 33, 190, 61, 52, 16, 189, 254, 160, 79, 190, 209, 69, 239, 189, 188, 98, 130, 61, 81, 51, 77, 190, 51, 2, 149, 61, 89, 172, 7, 62, 34, 235, 7, 62, 53, 78, 201, 189, 253, 12, 11, 190, 117, 204, 212, 60, 135, 243, 170, 58, 200, 19, 10, 190, 224, 137, 70, 190, 169, 26, 61, 59, 49, 116, 95, 61, 140, 91, 194, 189, 187, 173, 223, 188, 110, 105, 150, 61, 41, 138, 83, 190, 113, 179, 137, 189, 234, 126, 131, 189, 138, 81, 178, 61, 55, 69, 208, 188, 212, 211, 18, 61, 218, 148, 62, 189, 234, 202, 87, 61, 60, 47, 206, 61, 171, 32, 69, 190, 222, 42, 167, 61, 60, 122, 242, 188, 20, 167, 28, 62, 225, 7, 97, 61, 103, 177, 84, 189, 76, 172, 13, 61, 40, 177, 145, 190, 101, 252, 195, 188, 163, 218, 194, 189, 91, 60, 173, 189, 135, 118, 128, 61, 189, 14, 75, 190, 190, 242, 208, 61, 119, 116, 110, 60, 89, 192, 11, 60, 235, 183, 95, 190, 212, 100, 136, 190, 137, 138, 121, 188, 116, 118, 98, 189, 107, 201, 235, 60, 112, 75, 109, 62, 99, 21, 5, 61, 20, 4, 38, 190, 205, 2, 160, 61, 250, 94, 43, 190, 11, 33, 41, 189, 105, 164, 194, 189, 165, 7, 77, 189, 175, 192, 208, 189, 174, 125, 30, 190, 216, 229, 16, 190, 241, 61, 80, 189, 242, 27, 56, 190, 84, 218, 220, 189, 27, 106, 71, 60, 94, 84, 33, 189, 89, 16, 137, 190, 205, 197, 251, 61, 126, 136, 46, 62, 138, 194, 125, 190, 90, 163, 197, 60, 111, 30, 183, 62, 214, 79, 41, 191, 249, 203, 155, 62, 245, 24, 79, 190, 248, 215, 16, 62, 16, 203, 177, 60, 109, 155, 11, 62, 232, 144, 174, 62, 212, 76, 44, 62, 133, 78, 182, 190, 241, 154, 94, 61, 43, 72, 131, 190, 84, 90, 105, 62, 77, 15, 74, 61, 251, 148, 64, 190, 198, 146, 66, 62, 123, 211, 28, 188, 130, 107, 152, 62, 155, 253, 74, 190, 50, 106, 4, 190, 3, 203, 241, 61, 161, 232, 153, 62, 231, 157, 204, 62, 80, 214, 113, 189, 162, 253, 138, 62, 167, 167, 86, 188, 98, 171, 137, 62, 41, 91, 181, 61, 39, 4, 123, 62, 19, 121, 126, 61, 248, 228, 197, 188, 57, 8, 45, 62, 94, 108, 202, 191, 224, 3, 93, 62, 69, 178, 193, 191, 148, 248, 7, 62, 227, 209, 158, 191, 80, 93, 35, 191, 49, 67, 226, 61, 89, 219, 25, 191, 210, 172, 223, 190, 253, 117, 8, 60, 207, 15, 203, 62, 9, 78, 73, 62, 218, 248, 155, 60, 6, 12, 52, 62, 1, 86, 70, 62, 130, 100, 77, 191, 71, 211, 127, 191, 112, 42, 138, 190, 71, 121, 221, 62, 41, 176, 209, 61, 236, 146, 137, 61, 206, 188, 110, 62, 95, 48, 64, 191, 34, 183, 168, 62, 147, 191, 58, 191, 245, 83, 7, 62, 8, 62, 98, 62, 230, 224, 154, 62, 39, 126, 2, 60, 27, 254, 95, 62, 211, 8, 255, 60, 234, 63, 6, 60, 182, 239, 189, 189, 106, 241, 124, 61, 111, 21, 140, 189, 12, 165, 92, 61, 225, 159, 137, 189, 104, 13, 31, 62, 113, 246, 154, 191, 69, 76, 43, 191, 175, 184, 142, 62, 252, 223, 174, 62, 69, 250, 39, 190, 9, 252, 130, 61, 208, 35, 140, 62, 151, 23, 31, 191, 112, 50, 14, 62, 203, 95, 58, 62, 196, 157, 70, 62, 70, 47, 147, 60, 82, 6, 160, 190, 219, 165, 21, 189, 33, 50, 18, 61, 110, 66, 142, 190, 20, 118, 1, 189, 115, 237, 180, 191, 191, 5, 69, 62, 172, 132, 44, 62, 149, 130, 145, 191, 237, 221, 226, 61, 29, 181, 115, 62, 79, 15, 206, 188, 183, 18, 131, 62, 150, 224, 140, 62, 238, 43, 29, 189, 70, 226, 196, 190, 235, 56, 71, 61, 238, 43, 58, 191, 179, 250, 53, 190, 137, 176, 162, 62, 49, 215, 28, 62, 251, 234, 63, 61, 133, 14, 150, 190, 159, 167, 56, 189, 24, 86, 210, 190, 171, 68, 163, 191, 206, 83, 144, 190, 106, 156, 243, 189, 220, 36, 166, 191, 100, 253, 227, 189, 174, 82, 160, 190, 241, 127, 163, 187, 228, 193, 2, 190, 164, 184, 239, 189, 230, 32, 204, 189, 252, 181, 116, 62, 125, 64, 56, 190, 186, 205, 218, 61, 185, 37, 162, 190, 216, 75, 35, 190, 99, 226, 28, 190, 134, 23, 18, 191, 132, 155, 227, 190, 2, 93, 204, 189, 10, 46, 22, 191, 66, 83, 87, 190, 195, 158, 116, 62, 45, 139, 243, 190, 56, 195, 110, 61, 255, 214, 212, 189, 239, 69, 13, 61, 9, 52, 130, 190, 12, 17, 100, 62, 109, 80, 155, 61, 254, 107, 172, 189, 70, 121, 202, 189, 120, 90, 31, 190, 152, 10, 241, 190, 221, 87, 144, 190, 155, 12, 151, 62, 119, 37, 14, 191, 187, 143, 12, 62, 242, 132, 110, 61, 3, 207, 58, 61, 96, 214, 33, 189, 149, 167, 180, 189, 184, 241, 23, 62, 38, 142, 250, 190, 145, 12, 170, 62, 30, 186, 49, 62, 193, 2, 187, 61, 71, 43, 112, 189, 205, 145, 253, 189, 227, 199, 59, 190, 186, 125, 139, 59, 227, 234, 188, 189, 150, 172, 51, 62, 24, 110, 166, 59, 228, 155, 221, 189, 221, 191, 16, 61, 80, 191, 190, 188, 232, 10, 34, 61, 254, 85, 4, 190, 168, 48, 38, 190, 216, 115, 71, 189, 214, 157, 100, 61, 232, 110, 180, 61, 45, 62, 129, 61, 188, 127, 30, 189, 134, 163, 18, 62, 19, 80, 17, 62, 59, 41, 241, 61, 188, 213, 20, 190, 32, 246, 15, 190, 99, 172, 85, 61, 246, 217, 150, 189, 83, 39, 43, 190, 29, 86, 22, 190, 0, 203, 14, 189, 133, 117, 168, 189, 105, 183, 210, 189, 89, 246, 240, 188, 63, 55, 40, 189, 171, 142, 127, 189, 37, 126, 197, 62, 20, 157, 216, 189, 217, 20, 25, 62, 228, 97, 29, 61, 165, 27, 196, 189, 31, 143, 10, 62, 158, 65, 123, 191, 245, 15, 34, 62, 12, 92, 172, 191, 234, 120, 230, 62, 151, 104, 69, 191, 11, 254, 28, 191, 99, 118, 192, 62, 220, 72, 174, 189, 189, 23, 0, 59, 171, 246, 17, 62, 212, 143, 81, 62, 132, 72, 242, 62, 6, 230, 73, 189, 141, 203, 215, 62, 16, 206, 245, 62, 239, 249, 156, 189, 237, 82, 92, 191, 14, 93, 248, 190, 156, 89, 77, 62, 118, 224, 22, 189, 61, 66, 206, 61, 189, 27, 230, 189, 178, 103, 140, 190, 198, 235, 113, 62, 252, 10, 80, 190, 229, 194, 64, 189, 83, 45, 54, 187, 80, 114, 135, 190, 99, 84, 251, 189, 88, 223, 128, 62, 51, 86, 89, 190, 112, 74, 174, 189, 242, 77, 183, 62, 68, 217, 2, 191, 128, 89, 129, 62, 32, 172, 226, 190, 73, 212, 220, 61, 215, 23, 52, 62, 194, 27, 179, 189, 121, 203, 185, 62, 156, 242, 185, 62, 156, 235, 25, 191, 174, 27, 93, 189, 192, 217, 136, 190, 2, 213, 188, 189, 244, 167, 118, 189, 212, 65, 246, 190, 169, 116, 242, 188, 40, 217, 214, 62, 43, 49, 84, 62, 24, 27, 71, 190, 253, 216, 20, 62, 153, 149, 242, 61, 136, 74, 26, 61, 196, 179, 175, 62, 116, 108, 41, 190, 72, 47, 44, 62, 239, 162, 191, 189, 96, 215, 137, 189, 131, 99, 46, 62, 154, 103, 227, 189, 85, 76, 27, 190, 217, 144, 31, 190, 173, 233, 31, 62, 7, 111, 241, 189, 253, 215, 187, 188, 168, 123, 95, 188, 13, 249, 25, 190, 67, 118, 244, 60, 11, 229, 20, 190, 127, 77, 120, 189, 253, 249, 178, 61, 112, 193, 240, 61, 24, 27, 235, 61, 132, 25, 134, 61, 21, 87, 239, 189, 91, 61, 42, 190, 55, 42, 213, 188, 7, 11, 15, 60, 115, 136, 57, 60, 160, 254, 227, 61, 152, 204, 49, 61, 227, 213, 51, 190, 248, 148, 37, 62, 188, 39, 96, 189, 9, 118, 52, 62, 99, 176, 22, 190, 11, 165, 41, 190, 167, 229, 35, 190, 190, 82, 68, 61, 235, 2, 98, 60, 234, 56, 108, 62, 18, 170, 66, 62, 213, 14, 87, 189, 74, 174, 132, 62, 247, 40, 139, 62, 12, 125, 194, 61, 168, 25, 33, 190, 128, 175, 132, 62, 3, 192, 82, 189, 236, 188, 232, 61, 243, 128, 110, 61, 35, 29, 125, 191, 117, 236, 109, 191, 122, 48, 21, 62, 169, 6, 172, 62, 36, 226, 146, 189, 79, 196, 91, 62, 126, 31, 108, 60, 192, 105, 186, 190, 57, 158, 202, 189, 122, 152, 248, 190, 3, 16, 13, 190, 43, 185, 102, 61, 124, 175, 33, 62, 182, 150, 206, 188, 17, 197, 29, 62, 236, 16, 202, 189, 102, 132, 174, 190, 146, 243, 252, 190, 114, 182, 150, 189, 152, 175, 238, 61, 41, 137, 142, 62, 112, 167, 1, 188, 106, 64, 142, 62, 27, 110, 88, 62, 64, 168, 207, 61, 27, 16, 84, 62, 85, 232, 254, 61, 147, 43, 173, 190, 192, 204, 173, 189, 125, 136, 138, 188, 108, 129, 115, 62, 95, 40, 255, 61, 47, 87, 252, 61, 133, 93, 164, 62, 46, 63, 81, 190, 219, 31, 117, 190, 95, 6, 33, 61, 178, 195, 187, 189, 239, 88, 220, 61, 175, 209, 41, 62, 211, 207, 102, 190, 27, 248, 1, 62, 70, 124, 248, 61, 190, 81, 32, 62, 148, 159, 26, 61, 60, 94, 35, 62, 81, 93, 169, 189, 201, 173, 250, 61, 16, 97, 25, 62, 81, 94, 184, 189, 36, 77, 89, 62, 109, 152, 32, 60, 44, 199, 239, 189, 1, 155, 125, 62, 132, 53, 76, 62, 242, 48, 190, 61, 19, 135, 128, 189, 129, 232, 71, 62, 167, 101, 151, 189, 41, 70, 116, 62, 109, 228, 164, 190, 112, 159, 212, 61, 246, 67, 136, 190, 171, 245, 168, 62, 54, 71, 30, 190, 206, 6, 169, 190, 215, 93, 163, 190, 199, 66, 108, 62, 67, 14, 97, 190, 104, 232, 167, 189, 82, 83, 137, 189, 160, 113, 158, 190, 160, 32, 184, 61, 161, 167, 75, 62, 91, 126, 8, 190, 131, 164, 253, 189, 102, 10, 224, 61, 17, 90, 149, 60, 110, 89, 83, 189, 175, 74, 133, 188, 215, 186, 142, 190, 23, 117, 159, 189, 161, 56, 67, 189, 74, 62, 52, 62, 168, 5, 185, 62, 49, 32, 160, 189, 66, 54, 254, 187, 13, 249, 112, 62, 0, 61, 226, 61, 79, 149, 131, 62, 11, 10, 195, 190, 117, 238, 157, 189, 84, 77, 251, 190, 233, 38, 134, 61, 139, 63, 184, 190, 255, 131, 236, 189, 215, 188, 153, 189, 144, 211, 23, 191, 174, 243, 177, 189, 36, 219, 142, 60, 233, 4, 110, 62, 101, 239, 238, 60, 237, 149, 194, 190, 118, 190, 220, 189, 57, 221, 171, 62, 142, 169, 141, 59, 79, 85, 214, 189, 141, 171, 196, 189, 159, 119, 89, 61, 43, 193, 173, 189, 249, 115, 7, 62, 102, 238, 197, 188, 86, 86, 180, 187, 147, 217, 29, 61, 29, 212, 131, 60, 254, 230, 128, 60, 160, 52, 55, 59, 194, 183, 30, 189, 105, 219, 137, 188, 157, 183, 39, 60, 49, 133, 8, 190, 124, 49, 209, 61, 223, 134, 207, 189, 198, 162, 56, 188, 11, 185, 208, 61, 127, 67, 150, 189, 145, 164, 72, 61, 101, 248, 8, 190, 152, 158, 2, 62, 90, 61, 197, 189, 225, 161, 31, 188, 246, 218, 246, 61, 173, 39, 56, 189, 38, 185, 167, 189, 177, 124, 87, 189, 96, 180, 234, 60, 191, 186, 107, 61, 229, 29, 130, 189, 22, 212, 135, 61, 120, 63, 149, 189, 250, 92, 75, 61, 79, 12, 244, 61, 201, 82, 182, 189, 10, 138, 77, 188, 86, 144, 232, 189, 4, 139, 155, 189, 17, 243, 244, 61, 127, 25, 192, 189, 2, 144, 47, 189, 97, 187, 184, 61, 24, 240, 213, 188, 4, 241, 53, 190, 42, 39, 179, 189, 205, 123, 27, 190, 214, 168, 87, 189, 68, 235, 13, 190, 87, 206, 243, 189, 90, 102, 136, 189, 84, 121, 27, 189, 250, 56, 10, 190, 63, 122, 162, 188, 240, 84, 2, 190, 186, 68, 163, 60, 69, 31, 28, 62, 11, 96, 233, 189, 18, 201, 251, 61, 71, 155, 76, 55, 3, 206, 64, 189, 139, 177, 213, 61, 198, 73, 244, 59, 213, 252, 160, 189, 2, 247, 106, 60, 130, 196, 188, 189, 154, 205, 16, 62, 238, 188, 164, 61, 167, 107, 118, 189, 58, 176, 158, 189, 125, 115, 200, 60, 48, 102, 216, 61, 95, 158, 65, 189, 15, 39, 173, 62, 176, 175, 128, 190, 222, 58, 188, 61, 94, 226, 88, 190, 113, 114, 155, 190, 118, 55, 168, 190, 198, 231, 218, 189, 114, 12, 48, 62, 82, 244, 202, 190, 56, 204, 126, 62, 165, 227, 70, 61, 182, 13, 128, 62, 131, 50, 86, 61, 42, 8, 18, 189, 155, 169, 215, 62, 59, 148, 207, 189, 193, 224, 34, 62, 96, 18, 96, 61, 198, 175, 99, 62, 238, 198, 175, 189, 236, 123, 210, 189, 14, 73, 43, 62, 10, 121, 168, 187, 71, 156, 252, 62, 89, 193, 135, 62, 86, 153, 166, 61, 38, 217, 79, 189, 166, 74, 81, 62, 64, 33, 211, 61, 200, 144, 30, 62, 111, 163, 173, 62, 214, 11, 52, 62, 231, 219, 29, 62, 27, 21, 150, 62, 162, 2, 132, 190, 239, 184, 8, 62, 67, 137, 46, 190, 86, 253, 128, 61, 188, 133, 11, 190, 155, 176, 84, 62, 8, 193, 149, 189, 167, 160, 67, 62, 75, 91, 136, 189, 21, 90, 5, 61, 94, 161, 159, 190, 68, 7, 163, 61, 57, 165, 129, 62, 163, 248, 191, 189, 250, 99, 37, 62, 192, 128, 35, 62, 166, 99, 152, 62, 140, 96, 95, 190, 115, 8, 239, 62, 206, 235, 204, 60, 53, 198, 143, 189, 193, 167, 177, 62, 74, 118, 229, 61, 216, 18, 234, 189, 19, 9, 158, 189, 31, 38, 243, 190, 108, 53, 227, 189, 140, 75, 43, 190, 125, 182, 68, 190, 171, 117, 181, 188, 6, 187, 21, 189, 65, 104, 153, 62, 49, 105, 149, 189, 100, 227, 118, 61, 65, 1, 147, 62, 44, 238, 23, 190, 151, 136, 83, 62, 117, 109, 117, 189, 143, 3, 117, 61, 120, 115, 165, 61, 198, 162, 251, 61, 144, 23, 89, 62, 222, 124, 1, 191, 25, 235, 80, 190, 85, 102, 14, 62, 189, 240, 232, 61, 205, 214, 46, 61, 29, 124, 113, 61, 22, 162, 176, 61, 118, 1, 207, 190, 3, 200, 56, 62, 237, 149, 41, 62, 164, 202, 71, 188, 211, 110, 167, 188, 7, 171, 152, 189, 142, 159, 2, 190, 83, 167, 226, 189, 145, 246, 209, 190, 48, 112, 117, 62, 95, 35, 251, 190, 23, 209, 58, 62, 64, 65, 49, 61, 23, 128, 56, 62, 235, 22, 34, 190, 104, 115, 136, 190, 149, 77, 135, 189, 168, 200, 162, 190, 64, 70, 22, 190, 131, 224, 55, 62, 63, 226, 52, 62, 161, 62, 160, 62, 123, 204, 49, 62, 62, 176, 138, 61, 237, 14, 27, 62, 147, 127, 241, 58, 46, 12, 46, 62, 165, 119, 7, 190, 233, 26, 54, 62, 184, 166, 139, 189, 30, 26, 105, 61, 136, 38, 253, 189, 101, 166, 131, 189, 34, 125, 156, 186, 77, 16, 211, 62, 60, 251, 91, 61, 113, 254, 215, 61, 177, 214, 146, 62, 36, 117, 181, 59, 208, 49, 38, 190, 248, 199, 181, 190, 97, 238, 146, 62, 238, 26, 27, 61, 97, 154, 189, 61, 223, 150, 219, 189, 40, 1, 255, 187, 215, 7, 169, 60, 105, 95, 83, 189, 129, 245, 32, 190, 131, 24, 170, 189, 128, 22, 142, 189, 167, 128, 0, 189, 26, 213, 7, 190, 49, 160, 160, 61, 95, 74, 10, 62, 79, 146, 29, 189, 238, 33, 185, 61, 82, 222, 103, 61, 153, 203, 137, 60, 100, 26, 246, 189, 218, 125, 42, 190, 139, 118, 96, 61, 201, 157, 129, 189, 88, 225, 233, 61, 21, 165, 60, 190, 60, 45, 44, 62, 54, 167, 122, 187, 191, 45, 200, 189, 137, 160, 45, 190, 53, 109, 238, 58, 189, 51, 22, 61, 172, 175, 156, 61, 162, 202, 2, 189, 203, 244, 51, 190, 61, 66, 138, 189, 102, 111, 13, 62, 178, 174, 26, 62, 216, 74, 153, 189, 148, 149, 65, 188, 254, 162, 196, 189, 166, 139, 78, 190, 128, 138, 2, 190, 98, 31, 82, 190, 118, 221, 155, 189, 216, 172, 177, 189, 7, 226, 136, 189, 138, 46, 203, 189, 105, 180, 208, 61, 238, 177, 6, 61, 142, 190, 153, 188, 196, 37, 201, 188, 136, 222, 122, 189, 133, 234, 78, 189, 170, 95, 97, 189, 135, 22, 34, 188, 33, 113, 109, 188, 124, 54, 120, 189, 72, 117, 54, 61, 56, 152, 216, 189, 179, 184, 172, 61, 243, 26, 12, 190, 251, 113, 201, 61, 251, 103, 1, 190, 133, 199, 241, 61, 218, 18, 250, 188, 47, 131, 175, 61, 38, 59, 224, 189, 97, 208, 17, 190, 88, 73, 6, 62, 173, 151, 140, 188, 12, 0, 39, 190, 168, 249, 152, 60, 30, 72, 57, 190, 45, 224, 173, 61, 250, 128, 194, 61, 190, 11, 65, 190, 240, 24, 37, 189, 187, 131, 228, 189, 138, 12, 42, 61, 66, 121, 0, 62, 142, 167, 193, 61, 62, 144, 65, 189, 128, 234, 197, 60, 64, 59, 239, 61, 98, 202, 229, 61, 78, 124, 240, 189, 200, 183, 226, 189, 75, 223, 11, 188, 32, 109, 27, 61, 215, 130, 119, 61, 156, 158, 59, 190, 40, 181, 0, 190, 194, 96, 156, 189, 135, 209, 4, 61, 16, 117, 34, 62, 70, 83, 84, 61, 246, 119, 67, 61, 112, 104, 145, 61, 110, 121, 151, 189, 253, 179, 240, 61, 206, 94, 81, 61, 154, 82, 161, 61, 204, 255, 105, 62, 194, 19, 73, 62, 71, 44, 71, 61, 144, 39, 168, 61, 191, 200, 134, 61, 203, 128, 55, 190, 215, 16, 213, 189, 240, 18, 135, 61, 118, 52, 169, 189, 152, 53, 31, 62, 128, 217, 143, 62, 242, 34, 39, 191, 59, 90, 231, 190, 137, 9, 161, 62, 96, 8, 252, 62, 137, 6, 203, 61, 46, 68, 208, 189, 212, 59, 130, 62, 204, 166, 173, 189, 120, 171, 214, 189, 204, 161, 20, 62, 69, 81, 231, 61, 91, 251, 172, 62, 192, 254, 87, 190, 198, 196, 27, 190, 133, 42, 204, 188, 203, 57, 39, 188, 238, 189, 55, 61, 148, 166, 8, 191, 226, 38, 17, 62, 142, 220, 176, 188, 4, 227, 129, 189, 8, 45, 115, 62, 242, 137, 121, 62, 224, 193, 28, 62, 148, 18, 244, 61, 38, 238, 95, 62, 168, 151, 121, 61, 135, 80, 57, 189, 73, 182, 135, 62, 197, 88, 128, 190, 247, 87, 243, 187, 208, 37, 3, 189, 65, 224, 42, 59, 231, 32, 72, 62, 242, 141, 35, 61, 38, 144, 1, 190, 35, 138, 39, 60, 14, 122, 254, 189, 108, 121, 158, 61, 181, 103, 25, 59, 233, 176, 35, 190, 171, 93, 132, 62, 42, 5, 38, 61, 27, 144, 196, 62, 255, 67, 55, 189, 57, 61, 249, 189, 100, 238, 106, 189, 173, 164, 147, 62, 115, 161, 230, 61, 241, 27, 249, 61, 108, 82, 26, 62, 37, 92, 24, 190, 124, 88, 91, 190, 127, 52, 110, 61, 144, 108, 163, 62, 73, 192, 57, 62, 125, 202, 128, 62, 85, 87, 199, 62, 84, 221, 153, 62, 184, 204, 235, 188, 148, 218, 110, 62, 108, 171, 136, 190, 33, 217, 47, 62, 102, 6, 82, 62, 213, 55, 125, 59, 118, 133, 6, 62, 68, 124, 150, 62, 162, 166, 130, 190, 63, 251, 149, 191, 6, 175, 22, 59, 144, 103, 184, 190, 200, 84, 147, 190, 64, 105, 7, 189, 49, 34, 161, 188, 70, 124, 59, 62, 250, 199, 10, 63, 27, 128, 12, 61, 59, 0, 242, 188, 118, 188, 186, 189, 211, 202, 141, 62, 85, 76, 80, 62, 175, 239, 211, 190, 253, 135, 27, 189};
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
                alignas(float) const unsigned char memory[] = {224, 244, 177, 188, 24, 218, 126, 189, 194, 46, 234, 189, 208, 113, 183, 62, 152, 216, 38, 62, 109, 235, 24, 61, 19, 21, 23, 190, 107, 70, 19, 60, 170, 154, 104, 62, 130, 158, 107, 62, 106, 72, 23, 189, 170, 197, 153, 60, 40, 195, 174, 189, 66, 57, 54, 61, 220, 4, 42, 62, 117, 34, 188, 184, 179, 143, 18, 189, 228, 72, 178, 62, 52, 214, 174, 189, 76, 183, 158, 61, 238, 169, 26, 190, 47, 1, 64, 190, 233, 55, 27, 60, 208, 181, 152, 190, 179, 149, 13, 190, 91, 245, 174, 61, 157, 4, 68, 190, 88, 17, 71, 190, 20, 89, 247, 185, 121, 229, 242, 61, 222, 74, 128, 62, 217, 228, 16, 62};
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
                alignas(float) const unsigned char memory[] = {100, 48, 189, 62, 5, 122, 222, 189, 32, 84, 130, 57, 135, 78, 44, 191, 50, 252, 189, 189, 181, 206, 149, 188, 218, 44, 55, 61, 86, 57, 187, 62, 148, 21, 34, 191, 231, 153, 222, 190, 38, 40, 113, 63, 12, 136, 22, 191, 179, 192, 241, 61, 181, 98, 227, 190, 34, 106, 224, 62, 64, 239, 201, 60, 113, 120, 182, 190, 167, 76, 246, 61, 73, 234, 232, 62, 179, 215, 178, 190, 92, 77, 174, 61, 72, 16, 191, 61, 42, 101, 236, 62, 3, 51, 173, 190, 102, 102, 86, 190, 236, 103, 188, 190, 159, 88, 117, 189, 95, 243, 190, 61, 112, 170, 245, 189, 144, 89, 26, 190, 111, 185, 102, 62, 50, 99, 6, 63, 85, 39, 2, 190, 115, 122, 97, 190, 138, 87, 184, 189, 67, 61, 97, 62, 58, 217, 139, 190, 27, 200, 201, 60, 189, 125, 213, 62, 18, 20, 17, 190, 223, 17, 201, 61, 238, 223, 89, 190, 27, 69, 161, 60, 48, 173, 86, 190, 189, 187, 45, 62, 239, 119, 229, 189, 77, 249, 55, 61, 58, 176, 151, 60, 129, 193, 97, 61, 200, 86, 108, 190, 120, 229, 7, 62, 128, 197, 69, 61, 73, 10, 33, 190, 146, 226, 239, 189, 205, 169, 134, 188, 38, 119, 2, 63, 11, 158, 113, 189, 81, 183, 63, 62, 255, 141, 204, 61, 125, 5, 21, 190, 254, 91, 145, 61, 203, 168, 201, 190, 249, 193, 191, 189, 63, 185, 110, 62};
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
                alignas(float) const unsigned char memory[] = {181, 209, 133, 62, 20, 114, 113, 190};
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
    alignas(float) const unsigned char memory[] = {254, 155, 69, 63, 34, 1, 141, 63, 107, 136, 46, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {169, 120, 33, 192, 225, 37, 145, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0072/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}