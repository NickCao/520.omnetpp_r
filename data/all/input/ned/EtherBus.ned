//
// Copyright (C) 2003 Andras Varga; CTIE, Monash University, Australia
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

//
// A generic bus model.
//
// The ethg[i] gates represent taps. Messages arriving on a tap
// travel on the bus on both directions, and copies of it are sent out
// on every other tap after delays proportional to their distances.
//
// Tap connections should have zero delays and zero data rates!
//
// Messages are not interpreted by the bus model in any way, thus the bus
// model is not specific to Ethernet in any way. Messages may
// represent anything, from the beginning of a frame transmission to
// end (or abortion) of transmission.
//
simple EtherBus
{
    parameters:
        @node();
        string positions;  // positions of taps on the cable in meters, as a sequence
                           // of numbers separated by spaces. If there are too
                           // few values, the distance between the last two positions
                           // is repeated, or 5 meters is used.
        int propagationSpeed @unit("mps") = default(200mps); // signal propagation speed on the bus
    gates:
        inout ethg[];    // to stations; each one represents a tap
}

